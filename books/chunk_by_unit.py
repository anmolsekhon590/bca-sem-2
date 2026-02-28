"""
Pipeline: PDF → Markdown → per-unit chunks

Steps:
  1. Convert every PDF in books/pdf/ to a single markdown file in books/markdown/
  2. Split each markdown file by unit into books/chunks/<BOOK_NAME>/unit_NN_<slug>.md

Usage:
  python chunk_by_unit.py [--convert] [--chunk] [--all]

  --convert   only run step 1 (PDF → markdown)
  --chunk     only run step 2 (markdown → chunks)
  --all       run both steps (default when no flag given)
"""

import re
import argparse
import pathlib

BASE_DIR     = pathlib.Path(__file__).parent
PDF_DIR      = BASE_DIR / "pdf"
MARKDOWN_DIR = BASE_DIR / "markdown"
CHUNKS_DIR   = BASE_DIR / "chunks"

# ── Unit detection patterns ────────────────────────────────────────────────────
# Pattern A: heading-level marker  →  ##### **Unit N: Title**
# These never appear in the TOC so no extra filtering needed.
HEADING_UNIT = re.compile(r'^#{1,6}\s+\*\*Unit\s+0?(\d+)[:\s]', re.IGNORECASE)
# Pattern B: broad bold marker for files without heading-level units (CSA / English)
# Matches any line starting with **Unit N  — TOC vs content is resolved by
# find_content_start() which locates where the unit sequence resets to 1.
BOLD_UNIT    = re.compile(r'^\*\*Unit\s*(\d+)', re.IGNORECASE)


# ── Step 1: PDF → Markdown ────────────────────────────────────────────────────

def convert_pdfs():
    try:
        import pymupdf4llm
    except ImportError:
        raise SystemExit(
            "pymupdf4llm not found.\n"
            "Activate the venv first:  source ../.venv/bin/activate"
        )

    MARKDOWN_DIR.mkdir(exist_ok=True)
    pdf_files = sorted(PDF_DIR.glob("*.pdf"))
    if not pdf_files:
        print(f"No PDF files found in {PDF_DIR}")
        return

    print(f"Converting {len(pdf_files)} PDF(s) to markdown …\n")
    for pdf in pdf_files:
        out = MARKDOWN_DIR / (pdf.stem + ".md")
        if out.exists():
            print(f"  skip  {pdf.name}  (already converted)")
            continue
        print(f"  {pdf.name} … ", end="", flush=True)
        md_text = pymupdf4llm.to_markdown(str(pdf))
        out.write_text(md_text, encoding="utf-8")
        print(f"{len(md_text):,} chars → {out.name}")


# ── Step 2: Markdown → per-unit chunks ────────────────────────────────────────

def slugify(text: str) -> str:
    text = re.sub(r'\*+', '', text)
    text = re.sub(r'[^\w\s-]', '', text)
    text = re.sub(r'\s+', '_', text.strip())
    return text.lower()[:60]


def extract_title(line: str) -> str:
    """Clean a unit header line down to a plain title string."""
    title = re.sub(r'^#{1,6}\s+', '', line)          # strip heading hashes
    title = re.sub(r'\*+', '', title)                 # strip bold/italic markers
    title = re.sub(r'^Unit\s*\d+\s*[:\s]*', '', title, flags=re.IGNORECASE)  # strip "Unit N:"
    title = re.sub(r'\s+', ' ', title).strip()
    return title


def detect_pattern(lines: list[str]) -> re.Pattern:
    for line in lines:
        if HEADING_UNIT.match(line):
            return HEADING_UNIT
    return BOLD_UNIT


def find_content_start(lines: list[str], pattern: re.Pattern) -> int:
    """For BOLD_UNIT files: find the line where content begins.

    The TOC lists units 1→N in order; content then restarts at unit 1.
    We detect the reset (a unit number ≤ the previous number after seeing
    several units) and return that line index.
    """
    if pattern is HEADING_UNIT:
        return 0  # heading markers never appear in the TOC

    prev_num = -1
    for i, line in enumerate(lines):
        m = pattern.match(line)
        if m:
            num = int(m.group(1))
            if num <= prev_num and prev_num >= 3:
                return i   # sequence reset → content starts here
            prev_num = num
    return 0


def find_unit_splits(lines: list[str], pattern: re.Pattern) -> list[tuple[int, int, str]]:
    """Return (line_index, unit_number, title) for each unit's first content occurrence."""
    content_start = find_content_start(lines, pattern)
    splits = []
    seen: set[int] = set()
    for i, line in enumerate(lines):
        if i < content_start:
            continue
        m = pattern.match(line)
        if m:
            num = int(m.group(1))
            if num not in seen:
                seen.add(num)
                splits.append((i, num, extract_title(line)))
    return splits


def chunk_book(md_file: pathlib.Path):
    book_name = re.sub(r'^\d+_[^_]+_', '', md_file.stem)  # e.g. COMPUTER_NETWORKS
    out_dir = CHUNKS_DIR / book_name
    out_dir.mkdir(parents=True, exist_ok=True)

    lines   = md_file.read_text(encoding='utf-8').splitlines(keepends=True)
    pattern = detect_pattern(lines)
    splits  = find_unit_splits(lines, pattern)

    if not splits:
        print(f"  [!] No units found in {md_file.name}")
        return

    print(f"\n{book_name}  ({len(splits)} units)")
    for idx, (start_line, unit_num, title) in enumerate(splits):
        end_line = splits[idx + 1][0] if idx + 1 < len(splits) else len(lines)
        content  = ''.join(lines[start_line:end_line])
        filename = f"unit_{unit_num:02d}_{slugify(title)}.md"
        (out_dir / filename).write_text(content, encoding='utf-8')
        print(f"  unit {unit_num:02d} → {filename}  ({len(content)/1024:.0f} KB)")


def chunk_all():
    CHUNKS_DIR.mkdir(exist_ok=True)
    md_files = sorted(MARKDOWN_DIR.glob("*.md"))
    if not md_files:
        print(f"No markdown files found in {MARKDOWN_DIR}")
        return
    print(f"Chunking {len(md_files)} book(s) by unit …")
    for md_file in md_files:
        chunk_book(md_file)


# ── Entry point ───────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--convert', action='store_true', help='PDF → markdown only')
    parser.add_argument('--chunk',   action='store_true', help='markdown → chunks only')
    parser.add_argument('--all',     action='store_true', help='run both steps (default)')
    args = parser.parse_args()

    run_all = args.all or not (args.convert or args.chunk)

    if args.convert or run_all:
        convert_pdfs()
        print()
    if args.chunk or run_all:
        chunk_all()
        print("\nDone.")


if __name__ == "__main__":
    main()
