# Computer System Architecture — Exam Questions

| Unit | Topic |
|------|-------|
| 01 | [Binary Systems](#unit-01-binary-systems) |
| 02 | [Boolean Algebra](#unit-02-boolean-algebra) |
| 03 | [Implementation of Combinational Logic Design](#unit-03-implementation-of-combinational-logic-design) |
| 04 | [Design of Synchronous Sequential Circuits](#unit-04-design-of-synchronous-sequential-circuits) |
| 05 | [Register Transfer and Micro-Operations](#unit-05-register-transfer-and-micro-operations) |
| 06 | [Instruction Codes and Instruction Cycles](#unit-06-instruction-codes-and-instruction-cycles) |
| 07 | [Machine Language](#unit-07-machine-language) |
| 08 | [Machine Programming](#unit-08-machine-programming) |
| 09 | [Register Organization](#unit-09-register-organization) |
| 10 | [Addressing Modes](#unit-10-addressing-modes) |
| 11 | [Pipeline Processing](#unit-11-pipeline-processing) |
| 12 | [Memory Technology](#unit-12-memory-technology) |
| 13 | [I/O Subsystems](#unit-13-io-subsystems) |
| 14 | [Hardware Description Logic (HDL)](#unit-14-hardware-description-logic-hdl) |

---

## Unit 01: Binary Systems

**Q1. Convert (1101.101)₂ to decimal.**

1×2³ + 1×2² + 0×2¹ + 1×2⁰ + 1×2⁻¹ + 0×2⁻² + 1×2⁻³ = 8 + 4 + 0 + 1 + 0.5 + 0 + 0.125 = **13.625**

**Q2. Convert (255)₁₀ to binary and hexadecimal.**

(255)₁₀ = (1111 1111)₂ = (FF)₁₆

**Q3. What is the 2's complement of (01101100)₂?**

1's complement = 10010011; add 1 → **10010100**

**Q4. Why do computers use binary rather than decimal?**

Electronic circuits have two stable states (on/off, high/low voltage), making binary naturally suited for hardware implementation. Decimal would require 10 distinct voltage levels.

**Q5. Convert (A5)₁₆ to octal.**

(A5)₁₆ = (1010 0101)₂ = (010 100 101)₂ = **(245)₈**

**Q6. What is the range of an 8-bit unsigned binary number?**

0 to 2⁸ − 1 = **0 to 255**

**Q7. Distinguish between 1's complement and 2's complement.**

1's complement inverts all bits. 2's complement inverts all bits and adds 1. 2's complement eliminates double representation of zero and is used in modern computers for subtraction.

---

## Unit 02: Boolean Algebra

**Q1. Simplify using Boolean algebra: F = A + A'B**

F = (A+A')(A+B) = 1·(A+B) = **A + B**

**Q2. State and prove De Morgan's First Theorem.**

(A·B)' = A' + B'. Verified by truth table — columns (A·B)' and A'+B' are identical for all input combinations.

**Q3. What is the difference between SOP and POS forms?**

SOP (Sum of Products) is a sum of minterms — product terms ORed together. POS (Product of Sums) is a product of maxterms — sum terms ANDed together. Both are canonical forms.

**Q4. How does a K-map minimize a Boolean function?**

Place 1s on the map for each minterm. Group adjacent 1s in power-of-2 groups (1, 2, 4, 8, 16). Larger groups eliminate more variables. The minimized SOP is the sum of all group product terms.

**Q5. Simplify: F = A'B'C + A'BC' + ABC' + ABC**

Using K-map, groups yield: **A'B'C + AB + BC'** (simplified).

**Q6. What is the Quine-McCluskey (tabulation) method?**

A systematic two-step method: (1) Find all prime implicants by exhaustively combining minterms that differ by one variable. (2) Select the minimum set of prime implicants that covers all minterms. Applicable to any number of variables.

**Q7. What is adjacency in a K-map?**

Two cells are adjacent if they differ in exactly one variable. In a 3-variable K-map, cell 010 is adjacent to 000, 011, and 110, but NOT to 001 or 111.

---

## Unit 03: Implementation of Combinational Logic Design

**Q1. What is the difference between a half adder and a full adder?**

A half adder adds two bits and produces Sum and Carry. A full adder adds three bits (two data + one carry-in) and produces Sum and Carry-out. Full adders can be cascaded to add multi-bit numbers.

**Q2. How is binary subtraction A−B implemented in hardware?**

Using 2's complement: invert B (1's complement via inverters), then set the initial carry-in to 1. The result is A + (2's complement of B) = A − B.

**Q3. What correction is applied in a BCD adder and when?**

When the binary sum of two BCD digits exceeds 9 (binary 1001) or produces a carry (K=1), binary 6 (0110) is added to correct the result. This converts invalid binary codes to valid BCD.

**Q4. What is the difference between an encoder and a decoder?**

An encoder converts 2ⁿ inputs to n outputs (e.g., octal-to-binary). A decoder converts n inputs to up to 2ⁿ outputs, generating all possible minterms. They perform opposite functions.

**Q5. How does a multiplexer differ from a demultiplexer?**

A MUX selects one of 2ⁿ inputs and routes it to a single output (many-to-one). A DEMUX routes a single input to one of 2ⁿ outputs (one-to-many). A decoder with enable input can function as a DEMUX.

**Q6. What is carry propagation delay in a parallel adder?**

In a ripple-carry adder, each full adder must wait for the carry from the previous stage. The worst case is carry propagating through all n stages, making total delay proportional to n × gate delay.

**Q7. In a 1-to-4 DEMUX, write the output equations.**

Y0 = S1'S0'D; Y1 = S1'S0D; Y2 = S1S0'D; Y3 = S1S0D

---

## Unit 04: Design of Synchronous Sequential Circuits

**Q1. Distinguish between synchronous and asynchronous sequential circuits.**

Synchronous circuits use a master clock; state transitions occur only at clock edges, making them predictable and stable. Asynchronous circuits respond immediately to input changes and can be unstable due to feedback paths.

**Q2. What is the forbidden state in an SR flip-flop and why?**

S=R=1 is forbidden because both Q and Q' are forced to 0 simultaneously, violating the complementary relationship. When inputs return to 0=0, the next state is unpredictable.

**Q3. Why is the JK flip-flop preferred over the SR flip-flop?**

The JK eliminates the forbidden state. When J=K=1, the output toggles (Q becomes Q'). It is more versatile and stable.

**Q4. How does a D flip-flop simplify circuit design?**

Q(t+1) = D, so the next state always equals the D input. This eliminates the need to handle forbidden input combinations and simplifies register design.

**Q5. What is an excitation table used for?**

An excitation table shows what input values are required to produce a desired state transition Q(t) → Q(t+1). It is used when designing sequential circuits to determine the input logic needed for each flip-flop.

**Q6. Describe the design procedure for a synchronous sequential circuit.**

(1) Derive the state diagram from specifications. (2) Create the state table. (3) Assign binary codes to states. (4) Choose flip-flop type. (5) Derive excitation equations using K-maps. (6) Derive output equations. (7) Implement circuit.

**Q7. What is a counter? How does a 3-bit binary up-counter work?**

A counter is a sequential circuit that cycles through binary states. A 3-bit binary up-counter cycles: 000→001→010→011→100→101→110→111→000, incrementing by 1 each clock pulse.

---

## Unit 05: Register Transfer and Micro-Operations

**Q1. What is Register Transfer Language?**

RTL is a symbolic notation used to describe micro-operation sequences among registers. It specifies what data transfers and operations take place in which registers and under what conditions.

**Q2. What are the two methods for constructing a common bus?**

(1) Using multiplexers — select lines choose which register's output drives the bus. (2) Using three-state bus buffers — only the enabled buffer drives the bus; others are in high-impedance state.

**Q3. What does R3 ← R1 + R2' + 1 represent?**

This is the subtraction operation R3 ← R1 − R2. R2' is the 1's complement of R2; adding 1 gives the 2's complement; then adding R1 performs R1 − R2.

**Q4. Describe the four types of micro-operations.**

(1) Register transfer: moves data between registers unchanged. (2) Arithmetic: add, subtract, increment, decrement, complement. (3) Logical: AND, OR, XOR, NOT on individual bits. (4) Shift: move bits left or right within a register.

**Q5. What is the difference between logical and arithmetic shift?**

In a logical shift, 0 fills the vacated bit position. In an arithmetic right shift, the sign bit is replicated to preserve the sign of a signed number. In arithmetic left shift, 0 fills the LSB but the sign bit must not change.

---

## Unit 06: Instruction Codes and Instruction Cycles

**Q1. What are the four phases of the instruction cycle?**

(1) Fetch instruction from memory, (2) Decode the instruction, (3) Read the effective address from memory (if indirect), (4) Execute the instruction.

**Q2. How is a direct address different from an indirect address?**

In direct addressing, the address field contains the actual address of the operand. In indirect addressing, the address field points to a memory location that contains the effective (actual) address — a two-step lookup.

**Q3. What is the role of the sequence counter (SC)?**

The SC is a 4-bit counter that generates 16 timing signals T0–T15 in sequence. It is incremented each clock pulse and cleared to 0 when an instruction completes, causing control to return to T0 for the next instruction.

**Q4. How does the control unit distinguish between instruction types?**

Based on decoder output D7 and flip-flop I: D7=0 → MRI; D7=1, I=0 → Register Reference; D7=1, I=1 → I/O instruction.

**Q5. What register holds the address of the next instruction to be executed?**

The **Program Counter (PC)**, which is a 12-bit register.

**Q6. What are the differences between hardwired and microprogrammed control?**

Hardwired is implemented directly in gates and flip-flops — fast, but difficult to modify. Microprogrammed stores control in memory — flexible and easier to change, but slower.

---

## Unit 07: Machine Language

**Q1. What are the four categories of machine language programs?**

(1) Binary code — raw binary. (2) Octal/Hexadecimal code — equivalent hex/octal. (3) Symbolic code — mnemonics and symbolic addresses (assembly language). (4) High-level languages — problem-oriented (Fortran, C, etc.).

**Q2. What is the difference between an MRI and a Non-MRI instruction?**

An MRI (Memory Reference Instruction) contains an opcode and an address (e.g., LDA X, ADD Y). A Non-MRI (register-reference or I/O) has only an opcode with no address (e.g., CLA, HLT, INP).

**Q3. Describe what happens in each pass of a two-pass assembler.**

Pass 1: Scans the entire program, assigns memory locations to each instruction/operand, builds the Address Symbol Table mapping labels to their addresses. Pass 2: Translates each instruction to binary using four lookup tables (pseudo, MRI, non-MRI, address symbol).

**Q4. What are pseudo-instructions?**

Pseudo-instructions (ORG, END, DEC, HEX) are directives to the assembler itself, not actual machine instructions. They tell the assembler where to place code (ORG), mark the program end (END), or define constant values (DEC, HEX).

**Q5. How is a program loop implemented in assembly language?**

A counter is initialized to a negative count (e.g., −100). A pointer holds the address of the first operand. Inside the loop, the ISZ instruction increments the counter; when it reaches 0 (skip condition), the loop ends. BUN branches back to the loop start when no skip occurs.

---

## Unit 08: Machine Programming

**Q1. How does the basic computer implement OR using only AND and NOT?**

By De Morgan's theorem: A OR B = (A' AND B')'. Steps: complement A → store; complement B → AND with stored A' → complement the result. Seven assembly instructions implement this.

**Q2. How does the BSA instruction implement subroutine calls?**

BSA saves the current PC value (return address) in the first memory location of the subroutine, then loads PC with subroutine address + 1, branching into the subroutine body. Return is done with an indirect BUN to the subroutine's first location.

**Q3. What is the difference between programmed I/O and interrupt-driven I/O?**

Programmed I/O: CPU continuously polls the flag bit, wasting time in a busy loop. Interrupt I/O: CPU continues executing other code; the I/O device sets a flag and sends an interrupt request; CPU then services it. Interrupt I/O is far more efficient.

**Q4. What must an interrupt service routine do before returning?**

(1) Save AC and E contents. (2) Check which flag caused the interrupt. (3) Service the I/O device. (4) Restore AC and E. (5) Turn interrupt ON (ION). (6) Execute indirect BUN to location 0 (the saved return address).

**Q5. Why is the highest-priority device serviced first during interrupt handling?**

Because the service routine checks flags sequentially; the first flag checked determines which device is serviced first. Priority is established by the order of checking.

---

## Unit 09: Register Organization

**Q1. What are the three main components of a CPU?**

Register set (stores intermediate and final results, addresses, and control data), ALU (performs arithmetic and logic operations), and Control unit (coordinates data movement and sequencing of micro-operations).

**Q2. What is a control word and what are its fields?**

A 14-bit word that specifies a complete micro-operation: SELA (3 bits, source A), SELB (3 bits, source B), SELD (3 bits, destination), OPR (5 bits, ALU operation). When applied to the register unit's selection inputs, it directs one complete data transfer and operation.

**Q3. Distinguish between PUSH and POP stack operations.**

PUSH inserts data on top of the stack — SP is incremented first, then the data is written to M[SP]. POP removes data from top — data is read from M[SP], then SP is decremented.

**Q4. What is the advantage of using postfix notation for arithmetic expressions?**

Postfix (Reverse Polish Notation) needs no parentheses, and operators appear in the order of evaluation. It can be evaluated left-to-right using a simple stack algorithm with no backtracking.

**Q5. Convert (A+B)×(C+D) to postfix notation.**

**AB+CD+×**

---

## Unit 10: Addressing Modes

**Q1. What are the three fields of a typical instruction format?**

Operation code (specifies operation), Address field (specifies operand location or register), Mode field (specifies how to find or compute the effective address).

**Q2. What is the effective address?**

The actual memory address from which the operand is retrieved (or to which a branch goes), computed according to the addressing mode from the address field of the instruction.

**Q3. Explain the difference between direct and indirect addressing.**

In direct addressing, the address field contains the operand's memory address directly (one memory access). In indirect addressing, the address field points to a memory location that contains the effective address — requiring two memory accesses.

**Q4. Why is RISC instruction design beneficial?**

RISC keeps all computational instructions register-to-register (no memory operands), simplifying the instruction set and enabling efficient pipelining. Only LOAD and STORE access memory, which is the slowest component.

**Q5. What is the difference between indexed and base-register addressing?**

Indexed: EA = index register + address field. Used for array access — the index register holds a displacement from a base. Base-register: EA = base register + address field. The base register holds the base of a memory segment, used for program relocation in multiprogramming.

**Q6. What is relative addressing mode and when is it used?**

EA = PC + signed offset in address field. Used primarily for branch instructions, allowing position-independent code. The short offset can be specified with fewer bits than a full memory address.

---

## Unit 11: Pipeline Processing

**Q1. What is pipelining and why is it used?**

Pipelining decomposes a sequential task (e.g., instruction execution) into overlapping sub-stages. While one instruction is in stage 2, the next enters stage 1. This increases throughput (instructions completed per unit time) without increasing clock frequency.

**Q2. Explain Flynn's classification of computer organizations.**

SISD: one instruction, one data stream (conventional computer). SIMD: one instruction applied to multiple data items simultaneously (e.g., vector processors). MISD: multiple instructions on same data — theoretical. MIMD: multiple independent instructions on multiple data streams (multiprocessor systems).

**Q3. What is data dependency in a pipeline and how is it handled?**

Data dependency occurs when an instruction needs a value that is not yet computed by a previous instruction still in the pipeline. Solutions: hardware interlocks (stall), operand forwarding (pass result directly), or delayed load (compiler reordering).

**Q4. Why does a branch instruction cause problems in a pipeline?**

After a branch, the instructions already loaded into the pipeline (fetched sequentially) may be the wrong ones if the branch is taken. The pipeline must be flushed and restarted from the branch target, wasting pipeline cycles.

**Q5. What are the four stages of a floating-point addition pipeline?**

(1) Compare exponents — determine which is larger. (2) Align mantissas — shift the smaller number's mantissa right by the exponent difference. (3) Add or subtract the mantissas. (4) Normalize the result — shift mantissa and adjust exponent.

---

## Unit 12: Memory Technology

**Q1. What is the purpose of cache memory?**

Cache compensates for the speed mismatch between the fast CPU and slower main memory. It stores recently used instructions and data so the CPU can access them at near-processor speed, reducing the average memory access time.

**Q2. Distinguish between SRAM and DRAM.**

SRAM uses flip-flops; retains data without refresh; faster; used for cache. DRAM stores charges on capacitors; must be refreshed periodically; slower but higher density and lower cost; used for main memory.

**Q3. What is associative memory and what are its advantages?**

Associative (content-addressable) memory is searched by content rather than address. All words are searched in parallel simultaneously. Advantage: very fast search time. Disadvantage: expensive due to added comparison logic in each cell.

**Q4. Compare direct mapping and associative mapping in cache.**

Direct mapping: each main memory block has exactly one possible cache location (fast, simple, but conflict-prone). Associative mapping: a block can go anywhere in cache (no conflicts, but requires parallel tag comparison — expensive). Set-associative is a practical compromise.

**Q5. What is virtual memory and why is it useful?**

Virtual memory allows programs to use an address space larger than physical memory by using disk as an extension. The OS manages moving pages between disk and RAM. Programs behave as if they have a large contiguous address space regardless of physical memory size.

**Q6. What does the MMU do?**

The Memory Management Unit translates virtual (logical) addresses generated by the CPU into physical (real) memory addresses. It uses the page table (and TLB for speed) to perform this mapping at runtime.

**Q7. What is the role of the bootstrap loader?**

The bootstrap loader is a small program stored in ROM. When power is turned on, the CPU begins executing it. It loads the operating system from disk into RAM and transfers control to the OS, preparing the computer for use.

---

## Unit 13: I/O Subsystems

**Q1. What is ASCII and how many characters does it encode?**

ASCII (American Standard Code for Information Interchange) is a 7-bit code that encodes 128 characters: 94 printable (26 uppercase, 26 lowercase, 10 digits, 32 special) and 34 non-printing control characters.

**Q2. What are the four types of I/O commands?**

Control (activate peripheral), Status (test device condition), Data Output (interface transfers data from bus to device), Data Input (interface receives data from device into buffer register).

**Q3. Compare strobe and handshaking data transfer methods.**

Strobe: one control signal indicates when data is valid; no acknowledgment — sender cannot confirm receipt. Handshaking: two control signals — source asserts "data valid," destination responds "data accepted." Handshaking is more reliable.

**Q4. Distinguish between programmed I/O, interrupt I/O, and DMA.**

Programmed I/O: CPU busy-polls the device flag continuously (CPU is occupied). Interrupt I/O: device signals CPU when ready; CPU is free to do other work between transfers. DMA: device controller transfers data directly to/from memory without CPU involvement for each word; CPU is only involved at start/end.

**Q5. What is the difference between memory-mapped I/O and isolated I/O?**

Isolated I/O: separate address spaces and control lines for I/O and memory; requires special IN/OUT instructions. Memory-mapped I/O: I/O interface registers share the memory address space; normal load/store instructions access I/O. Memory-mapped is simpler programmatically.

**Q6. Describe asynchronous serial transmission format.**

Each character is framed: a start bit (always 0) marks the beginning, followed by 7 or 8 data bits, and one or two stop bits (always 1). Receiver detects the start bit by the line going from 1 to 0, then samples at the correct bit intervals.

---

## Unit 14: Hardware Description Logic (HDL)

**Q1. What is an HDL and why is it used?**

A Hardware Description Language describes the structure and behavior of digital hardware in a textual form. HDLs (Verilog, VHDL) are used to design, simulate, and synthesize digital circuits. They allow hardware to be described, tested in simulation, and then automatically translated into actual gate-level circuits.

**Q2. What is the difference between Verilog and VHDL?**

Verilog (Verify Logic) is case-sensitive, vendor-independent, C-like syntax, supports simulation and synthesis. VHDL (VHSIC HDL) is more verbose, Ada-like syntax, strongly typed. Both describe hardware at multiple abstraction levels. Verilog is more common in industry; VHDL is common in defense and Europe.

**Q3. Write the Verilog assign statement for a 2-to-1 MUX.**

`assign Z = S ? i0 : i1;` — When S=0, Z=i0; when S=1, Z=i1.

**Q4. What does `~(a ^ b)` represent in Verilog?**

It implements the XNOR gate — the bitwise NOT of XOR. Output is 1 when both inputs are equal (both 0 or both 1), 0 otherwise.

**Q5. What is the difference between bitwise and logical operators in Verilog?**

Bitwise operators (`&`, `|`, `^`, `~`) operate on individual bits of a multi-bit value. Logical operators (`&&`, `||`, `!`) treat the entire operand as a single true/false value (any non-zero = true). For single-bit signals, they are equivalent.

**Q6. Write the Verilog module for a 3-to-8 decoder.**

```verilog
module Decoder(input logic x, y, z, output logic d0,d1,d2,d3,d4,d5,d6,d7);
  assign d0 = (~x & ~y & ~z); assign d1 = (~x & ~y &  z);
  assign d2 = (~x &  y & ~z); assign d3 = (~x &  y &  z);
  assign d4 = ( x & ~y & ~z); assign d5 = ( x & ~y &  z);
  assign d6 = ( x &  y & ~z); assign d7 = ( x &  y &  z);
endmodule
```

**Q7. What is the purpose of the `endmodule` keyword in Verilog?**

`endmodule` marks the end of a module definition. Everything between `module <name>(ports);` and `endmodule` defines the interface, internal signals, and logic of that hardware block.
