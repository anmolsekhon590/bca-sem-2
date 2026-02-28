# Semester 2 — Study Notes & Exam Prep

Exam preparation material generated from the official course textbooks.
Each subject has a single **prep file** covering all 14 units with summaries,
key concepts, formulas, and exam Q&As.

---

## Subjects

| Code | Subject | Prep Material |
|------|---------|---------------|
| ECAP256 | Computer Networks | [COMPUTER_NETWORKS.md](books/prep/COMPUTER_NETWORKS.md) |
| ECAP200 | Database Management Systems | [DATABASE_MANAGEMENT_SYSTEMS.md](books/prep/DATABASE_MANAGEMENT_SYSTEMS.md) |
| ECAP202 | Object-Oriented Programming (C++) | [OBJECT_ORIENTED_PROGRAMMING.md](books/prep/OBJECT_ORIENTED_PROGRAMMING.md) |
| ECAP268 | Computer System Architecture | [COMPUTER_SYSTEM_ARCHITECTURE.md](books/prep/COMPUTER_SYSTEM_ARCHITECTURE.md) |
| EENG140 | Advanced English Communication Skills | [ADVANCED_ENGLISH_COMMUNICATION_SKILLS.md](books/prep/ADVANCED_ENGLISH_COMMUNICATION_SKILLS.md) |

---

## What each prep file contains

For every unit (14 per book):

- **Summary** — what the unit covers
- **Key definitions & concepts** — bullet-point reference
- **Formulas / code / tables** — where applicable
- **Exam Q&A** — 5–8 likely exam questions with concise answers

---

## Repo layout

```
books/
├── pdf/                                          original textbook PDFs
├── prep/                                         ← exam prep (the useful bit)
│   ├── COMPUTER_NETWORKS.md
│   ├── DATABASE_MANAGEMENT_SYSTEMS.md
│   ├── OBJECT_ORIENTED_PROGRAMMING.md
│   ├── COMPUTER_SYSTEM_ARCHITECTURE.md
│   └── ADVANCED_ENGLISH_COMMUNICATION_SKILLS.md
└── chunk_by_unit.py                              pipeline: PDF → markdown → per-unit chunks
```

> `books/markdown/` and `books/chunks/` are gitignored (generated intermediates).
