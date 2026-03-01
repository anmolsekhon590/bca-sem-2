# Computer System Architecture — Complete Exam Prep

**Textbook:** Computer System Architecture (M. Morris Mano style), Lovely Professional University  
**Author of notes:** Dr. Divya, LPU  
**Units covered:** 14

---

## Overall Book Summary

This book covers the complete hardware and software architecture of a digital computer from the ground up. It begins with the mathematical and logical foundations (binary systems, Boolean algebra, logic gates, combinational and sequential circuits), then moves into the computer organization layer (registers, micro-operations, instruction cycles, machine language, programming). The upper half of the book deals with CPU architecture (register organization, addressing modes, pipeline processing), and finishes with memory hierarchy, I/O subsystems, and Hardware Description Languages (Verilog/VHDL). The conceptual arc is: **bits → logic → circuits → CPU → memory → I/O → HDL description**.

Key recurring themes:
- Everything in a computer is ultimately binary — 0s and 1s.
- Hardware is described by Boolean algebra; circuits implement Boolean functions.
- The CPU fetches, decodes, and executes instructions from memory using registers and an ALU.
- Memory and I/O form the interface between the CPU and the outside world.
- Pipeline processing and addressing modes are fundamental to modern CPU performance.

---

## Table of Contents

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

### Summary

Introduces the number systems used in digital computing: decimal (base-10), binary (base-2), octal (base-8), and hexadecimal (base-16). Covers number conversions between bases, complements (1's and 2's), and fixed-point/floating-point representation.

### Key Definitions and Concepts

- **Binary Number System:** Base-2 system using only digits 0 and 1. Each bit position is weighted by a power of 2.
- **Bit:** The basic unit of binary information (a single 0 or 1). Also called a binary digit.
- **Nibble:** 4 bits. **Byte:** 8 bits. **Word:** typically 16 bits (context-dependent).
- **Octal (base-8):** Uses digits 0–7. One octal digit = 3 binary bits.
- **Hexadecimal (base-16):** Uses digits 0–9 and A–F. One hex digit = 4 binary bits.
- **1's Complement:** Invert all bits of a binary number. For an n-bit number N: complement = (2^n - 1) - N.
- **2's Complement:** Add 1 to the 1's complement. Used for signed subtraction. 2's complement of N = 2^n - N.
- **Fixed-point representation:** Binary point position is fixed (predetermined).
- **Floating-point representation:** A number stored as mantissa × base^exponent (normalized form).
- **Positional value:** digit × base^position (positions count from 0 at the right).

### Number Conversion Summary

| From \ To | Binary | Octal | Decimal | Hex |
|-----------|--------|-------|---------|-----|
| Binary | — | Group 3 bits | Multiply by powers of 2 | Group 4 bits |
| Octal | Each digit → 3 bits | — | Multiply by powers of 8 | Convert via binary |
| Decimal | Repeated division by 2 | Repeated division by 8 | — | Repeated division by 16 |
| Hex | Each digit → 4 bits | Convert via binary | Multiply by powers of 16 | — |

**Example:** (2A)₁₆ = (0010 1010)₂ = (52)₈ = (42)₁₀

**2's complement subtraction (A − B):** Compute 2's complement of B, then add to A. If final carry = 1, result is positive (discard carry). If no carry, result is negative (take 2's complement of result).

### Exam Questions and Answers

**Q1. Convert (1101.101)₂ to decimal.**

A: 1×2³ + 1×2² + 0×2¹ + 1×2⁰ + 1×2⁻¹ + 0×2⁻² + 1×2⁻³ = 8 + 4 + 0 + 1 + 0.5 + 0 + 0.125 = **13.625**

**Q2. Convert (255)₁₀ to binary and hexadecimal.**

A: (255)₁₀ = (1111 1111)₂ = (FF)₁₆

**Q3. What is the 2's complement of (01101100)₂?**

A: 1's complement = 10010011; add 1 → **10010100**

**Q4. Why do computers use binary rather than decimal?**

A: Electronic circuits have two stable states (on/off, high/low voltage), making binary naturally suited for hardware implementation. Decimal would require 10 distinct voltage levels.

**Q5. Convert (A5)₁₆ to octal.**

A: (A5)₁₆ = (1010 0101)₂ = (010 100 101)₂ = **(245)₈**

**Q6. What is the range of an 8-bit unsigned binary number?**

A: 0 to 2⁸ − 1 = **0 to 255**

**Q7. Distinguish between 1's complement and 2's complement.**

A: 1's complement inverts all bits. 2's complement inverts all bits and adds 1. 2's complement eliminates double representation of zero and is used in modern computers for subtraction.

---

## Unit 02: Boolean Algebra

### Summary

Introduces the algebraic system for binary logic: postulates, theorems, De Morgan's laws, canonical forms (SOP, POS), and minimization using K-maps and the Quine-McCluskey (tabulation) method.

### Key Definitions and Concepts

- **Boolean Algebra:** An algebraic system with values {0, 1}, binary operators {+, ·}, and a unary NOT operator.
- **Closure:** For any a, b ∈ S, a·b and a+b ∈ S.
- **Commutative:** A+B = B+A; A·B = B·A
- **Associative:** A+(B+C) = (A+B)+C; A·(B·C) = (A·B)·C
- **Distributive:** A·(B+C) = A·B + A·C; A+(B·C) = (A+B)·(A+C)
- **Identity:** A+0 = A; A·1 = A
- **Annulment:** A+1 = 1; A·0 = 0
- **Complement:** A+A' = 1; A·A' = 0
- **Idempotent:** A+A = A; A·A = A
- **Absorption:** A+A·B = A; A·(A+B) = A
- **Double Complement:** (A')' = A
- **De Morgan's First Theorem:** (A·B)' = A' + B' (NAND = negative-OR)
- **De Morgan's Second Theorem:** (A+B)' = A'·B' (NOR = negative-AND)
- **Duality Principle:** Any valid Boolean equation remains valid if + ↔ · and 0 ↔ 1 are swapped.
- **Minterm (SOP):** A product term containing all variables; function = sum of minterms where output = 1.
- **Maxterm (POS):** A sum term containing all variables; function = product of maxterms where output = 0.
- **K-Map (Karnaugh Map):** Graphical tool for minimizing Boolean expressions. Cells differ by exactly 1 variable (Gray code order). Group 1s (for SOP) or 0s (for POS) in powers of 2.
- **Prime Implicant:** A grouping that cannot be combined with another group (used in Quine-McCluskey method).
- **Operator Precedence:** Parentheses → NOT → AND → OR

### De Morgan's Truth Tables

**Theorem 1: (A·B)' = A' + B'**

| A | B | A·B | (A·B)' | A' | B' | A'+B' |
|---|---|-----|--------|----|----|-------|
| 0 | 0 | 0   | 1      | 1  | 1  | 1     |
| 0 | 1 | 0   | 1      | 1  | 0  | 1     |
| 1 | 0 | 0   | 1      | 0  | 1  | 1     |
| 1 | 1 | 1   | 0      | 0  | 0  | 0     |

**Theorem 2: (A+B)' = A'·B'**

| A | B | A+B | (A+B)' | A' | B' | A'·B' |
|---|---|-----|--------|----|----|-------|
| 0 | 0 | 0   | 1      | 1  | 1  | 1     |
| 0 | 1 | 1   | 0      | 1  | 0  | 0     |
| 1 | 0 | 1   | 0      | 0  | 1  | 0     |
| 1 | 1 | 1   | 0      | 0  | 0  | 0     |

### K-Map Cell Count

- 2 variables: 4 cells (2²)
- 3 variables: 8 cells (2³)
- 4 variables: 16 cells (2⁴)
- 5 variables: 32 cells (2⁵) — requires two 4-variable maps

### Exam Questions and Answers

**Q1. Simplify using Boolean algebra: F = A + A'B**

A: F = (A+A')(A+B) = 1·(A+B) = **A + B**

**Q2. State and prove De Morgan's First Theorem.**

A: (A·B)' = A' + B'. Verified by truth table — columns (A·B)' and A'+B' are identical for all input combinations.

**Q3. What is the difference between SOP and POS forms?**

A: SOP (Sum of Products) is a sum of minterms — product terms ORed together. POS (Product of Sums) is a product of maxterms — sum terms ANDed together. Both are canonical forms.

**Q4. How does a K-map minimize a Boolean function?**

A: Place 1s on the map for each minterm. Group adjacent 1s in power-of-2 groups (1, 2, 4, 8, 16). Larger groups eliminate more variables. The minimized SOP is the sum of all group product terms.

**Q5. Simplify: F = A'B'C + A'BC' + ABC' + ABC**

A: Using K-map, groups yield: **A'B'C + AB + BC'** (simplified).

**Q6. What is the Quine-McCluskey (tabulation) method?**

A: A systematic two-step method: (1) Find all prime implicants by exhaustively combining minterms that differ by one variable. (2) Select the minimum set of prime implicants that covers all minterms. Applicable to any number of variables.

**Q7. What is adjacency in a K-map?**

A: Two cells are adjacent if they differ in exactly one variable. In a 3-variable K-map, cell 010 is adjacent to 000, 011, and 110, but NOT to 001 or 111.

---

## Unit 03: Implementation of Combinational Logic Design

### Summary

Covers logic gates and their truth tables, and the design of key combinational circuits: half adder, full adder, subtractors, BCD adder, binary parallel adder, encoders, decoders, multiplexers, and demultiplexers.

### Key Definitions and Concepts

- **Combinational Circuit:** Output depends only on current inputs (no memory). Consists of logic gates only.
- **Sequential Circuit:** Output depends on current inputs AND stored state (uses flip-flops).
- **Logic Gate:** Basic electronic circuit with one output and one or more inputs.
- **Half Adder:** Adds two single bits. Outputs: Sum (S = A ⊕ B) and Carry (C = A·B).
- **Full Adder:** Adds three bits (A, B, Cin). S = A'B'Cin + A'BCin' + AB'Cin' + ABCin; C = AB + ACin + BCin.
- **Subtractor:** A−B is implemented as A + (2's complement of B). Requires inverters and initial carry=1.
- **Overflow:** In signed arithmetic, occurs when two numbers of the same sign produce a result of the opposite sign.
- **BCD Adder:** Adds two BCD digits. If binary sum > 9 or carry=1, add 6 (0110) to correct. Carry-out formula: C = K + Z8·Z4 + Z8·Z2.
- **Parallel Adder:** Chain of full adders; carry ripples from LSB to MSB.
- **Encoder:** 2ⁿ input lines → n output lines. Octal-to-binary: 8 inputs → 3 outputs.
- **Decoder:** n input lines → 2ⁿ output lines. Generates minterms of n variables.
- **Multiplexer (MUX):** 2ⁿ data inputs + n select lines → 1 output. A data selector.
- **Demultiplexer (DEMUX):** 1 input + n select lines → 2ⁿ outputs. Distributes data.

### Truth Tables

**Half Adder:**

| X | Y | C (Carry) | S (Sum) |
|---|---|-----------|---------|
| 0 | 0 | 0         | 0       |
| 0 | 1 | 0         | 1       |
| 1 | 0 | 0         | 1       |
| 1 | 1 | 1         | 0       |

**Full Adder (x, y, z where z = Cin):**

| x | y | z | C | S |
|---|---|---|---|---|
| 0 | 0 | 0 | 0 | 0 |
| 0 | 0 | 1 | 0 | 1 |
| 0 | 1 | 0 | 0 | 1 |
| 0 | 1 | 1 | 1 | 0 |
| 1 | 0 | 0 | 0 | 1 |
| 1 | 0 | 1 | 1 | 0 |
| 1 | 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 1 | 1 |

**4-to-1 Multiplexer:**

| S1 | S0 | Output |
|----|----|--------|
| 0  | 0  | I0     |
| 0  | 1  | I1     |
| 1  | 0  | I2     |
| 1  | 1  | I3     |

Y = I0·S1'S0' + I1·S1'S0 + I2·S1S0' + I3·S1S0

**Octal-to-Binary Encoder Outputs:**
- Z = D1 + D3 + D5 + D7
- Y = D2 + D3 + D6 + D7
- X = D4 + D5 + D6 + D7

### Exam Questions and Answers

**Q1. What is the difference between a half adder and a full adder?**

A: A half adder adds two bits and produces Sum and Carry. A full adder adds three bits (two data + one carry-in) and produces Sum and Carry-out. Full adders can be cascaded to add multi-bit numbers.

**Q2. How is binary subtraction A−B implemented in hardware?**

A: Using 2's complement: invert B (1's complement via inverters), then set the initial carry-in to 1. The result is A + (2's complement of B) = A − B.

**Q3. What correction is applied in a BCD adder and when?**

A: When the binary sum of two BCD digits exceeds 9 (binary 1001) or produces a carry (K=1), binary 6 (0110) is added to correct the result. This converts invalid binary codes to valid BCD.

**Q4. What is the difference between an encoder and a decoder?**

A: An encoder converts 2ⁿ inputs to n outputs (e.g., octal-to-binary). A decoder converts n inputs to up to 2ⁿ outputs, generating all possible minterms. They perform opposite functions.

**Q5. How does a multiplexer differ from a demultiplexer?**

A: A MUX selects one of 2ⁿ inputs and routes it to a single output (many-to-one). A DEMUX routes a single input to one of 2ⁿ outputs (one-to-many). A decoder with enable input can function as a DEMUX.

**Q6. What is carry propagation delay in a parallel adder?**

A: In a ripple-carry adder, each full adder must wait for the carry from the previous stage. The worst case is carry propagating through all n stages, making total delay proportional to n × gate delay.

**Q7. In a 1-to-4 DEMUX, write the output equations.**

A: Y0 = S1'S0'D; Y1 = S1'S0D; Y2 = S1S0'D; Y3 = S1S0D

---

## Unit 04: Design of Synchronous Sequential Circuits

### Summary

Covers sequential circuits, latches, flip-flops (SR, JK, D, T), clocked synchronous design, characteristic and excitation tables, state tables/diagrams, and counter design.

### Key Definitions and Concepts

- **Sequential Circuit:** Output depends on current inputs AND present state. Contains combinational logic + storage elements in a feedback loop.
- **Asynchronous Sequential Circuit:** State changes occur whenever inputs change (no clock). Prone to instability.
- **Synchronous Sequential Circuit:** State changes only on clock edges. Uses flip-flops. Stable and predictable.
- **Latch:** Basic storage element; holds 0 or 1. The SR (Set-Reset) latch is the most fundamental.
- **Flip-Flop:** Clock-controlled latch that changes state only at clock transitions.
- **SR Flip-Flop:** S=1 sets Q=1; R=1 resets Q=0; S=R=1 is an undefined (forbidden) state.
- **JK Flip-Flop:** Like SR but J=K=1 causes toggling (Q → Q'). No undefined state.
- **D Flip-Flop (Data):** Q follows D on the clock edge. Q(next) = D. Simplest; used in registers.
- **T Flip-Flop (Toggle):** T=1 toggles the output; T=0 holds. Q(next) = T ⊕ Q.
- **Characteristic Table:** Defines the next state Q(t+1) given current state Q(t) and inputs.
- **Excitation Table:** Given desired Q(t) → Q(t+1) transition, what input values are needed? Used during flip-flop selection in design.
- **State Table:** Lists current state, inputs, next state, and outputs for all combinations.
- **State Diagram:** Graphical representation of state table. States = circles, transitions = arcs.
- **Counter:** A sequential circuit that cycles through a sequence of states. Binary counters count in natural binary order.

### SR NOR Latch Truth Table

| S | R | Q     | Q'    |
|---|---|-------|-------|
| 1 | 0 | 1     | 0     | (Set state)
| 0 | 0 | 1     | 0     | (Memory — after S=1)
| 0 | 1 | 0     | 1     | (Reset state)
| 0 | 0 | 0     | 1     | (Memory — after R=1)
| 1 | 1 | **Undefined** | **Undefined** |

### D Flip-Flop Characteristic Table

| D | Q(t) | Q(t+1) |
|---|------|--------|
| 0 | 0    | 0      |
| 0 | 1    | 0      |
| 1 | 0    | 1      |
| 1 | 1    | 1      |

Q(t+1) = D

### JK Flip-Flop Characteristic Table

| J | K | Q(t+1)  |
|---|---|---------|
| 0 | 0 | Q(t)    | (No change)
| 0 | 1 | 0       | (Reset)
| 1 | 0 | 1       | (Set)
| 1 | 1 | Q'(t)   | (Toggle)

### Exam Questions and Answers

**Q1. Distinguish between synchronous and asynchronous sequential circuits.**

A: Synchronous circuits use a master clock; state transitions occur only at clock edges, making them predictable and stable. Asynchronous circuits respond immediately to input changes and can be unstable due to feedback paths.

**Q2. What is the forbidden state in an SR flip-flop and why?**

A: S=R=1 is forbidden because both Q and Q' are forced to 0 simultaneously, violating the complementary relationship. When inputs return to 0=0, the next state is unpredictable.

**Q3. Why is the JK flip-flop preferred over the SR flip-flop?**

A: The JK eliminates the forbidden state. When J=K=1, the output toggles (Q becomes Q'). It is more versatile and stable.

**Q4. How does a D flip-flop simplify circuit design?**

A: Q(t+1) = D, so the next state always equals the D input. This eliminates the need to handle forbidden input combinations and simplifies register design.

**Q5. What is an excitation table used for?**

A: An excitation table shows what input values are required to produce a desired state transition Q(t) → Q(t+1). It is used when designing sequential circuits to determine the input logic needed for each flip-flop.

**Q6. Describe the design procedure for a synchronous sequential circuit.**

A: (1) Derive the state diagram from specifications. (2) Create the state table. (3) Assign binary codes to states. (4) Choose flip-flop type. (5) Derive excitation equations using K-maps. (6) Derive output equations. (7) Implement circuit.

**Q7. What is a counter? How does a 3-bit binary up-counter work?**

A: A counter is a sequential circuit that cycles through binary states. A 3-bit binary up-counter cycles: 000→001→010→011→100→101→110→111→000, incrementing by 1 each clock pulse.

---

## Unit 05: Register Transfer and Micro-Operations

### Summary

Introduces Register Transfer Language (RTL) for describing data flow between registers, the bus system, memory read/write operations, and the four categories of micro-operations: register transfer, arithmetic, logical, and shift.

### Key Definitions and Concepts

- **Register Transfer Language (RTL):** Symbolic notation for describing micro-operation sequences among registers. Example: R2 ← R1 means "transfer R1 to R2."
- **Register:** Named with capital letters (MAR, PC, IR, AC, DR, etc.).
- **Conditional Transfer:** P: R2 ← R1 — transfer occurs only if control variable P = 1.
- **Common Bus System:** Shared set of wires connecting multiple registers; only one source drives the bus at a time.
- **Bus construction methods:**
  - With multiplexers (select lines determine which register drives the bus)
  - With three-state bus buffers (high-impedance state allows sharing)
- **Three-state buffer:** Has three output states: logic 0, logic 1, and high impedance (open circuit). High impedance = disabled (control input = 0).
- **Memory Read:** DR ← M[AR] — read memory word at address in AR into DR.
- **Memory Write:** M[AR] ← R1 — write R1 into memory address in AR.
- **Arithmetic Micro-operations:** R3←R1+R2 (add), R3←R1−R2 (subtract), R2←R2'+1 (2's complement), R1←R1+1 (increment), R1←R1−1 (decrement).
- **Logic Micro-operations:** OR (R1←R1∨R2), AND (R1←R1∧R2), XOR (R1←R1⊕R2), NOT (R1←R1').
- **Selective Set:** B acts as mask; bits in A corresponding to 1s in B are set to 1.  A=1010, B=1100 → A=1110.
- **Selective Complement:** Bits in A corresponding to 1s in B are complemented. A=1010, B=1100 → A=0110.
- **Selective Clear:** Bits in A corresponding to 1s in B are cleared to 0. A=1010, B=1100 → A=0010.
- **Mask (AND):** Bits in A corresponding to 0s in B are cleared. A=0110 1010, B=0000 1111 → A=0000 1010.
- **Shift Micro-operations:**
  - Logical: shl (shift left, 0 fills right), shr (shift right, 0 fills left)
  - Circular: cil (rotate left), cir (rotate right)
  - Arithmetic: ashl (sign bit preserved on left shifts), ashr (sign bit propagated right)

### RTL Symbols

| Symbol | Meaning | Example |
|--------|---------|---------|
| Letters | Register name | MAR, R2 |
| ( ) | Part of register | R2(0-7) |
| ← | Transfer direction | R2 ← R1 |
| , | Concurrent operations | R2←R1, R1←R2 |
| M[ ] | Memory word | M[AR] |

### Bus Selection Table (4-register system)

| S1 | S0 | Register on Bus |
|----|----|----------------|
| 0  | 0  | A              |
| 0  | 1  | B              |
| 1  | 0  | C              |
| 1  | 1  | D              |

### Exam Questions and Answers

**Q1. What is Register Transfer Language?**

A: RTL is a symbolic notation used to describe micro-operation sequences among registers. It specifies what data transfers and operations take place in which registers and under what conditions.

**Q2. What are the two methods for constructing a common bus?**

A: (1) Using multiplexers — select lines choose which register's output drives the bus. (2) Using three-state bus buffers — only the enabled buffer drives the bus; others are in high-impedance state.

**Q3. What does R3 ← R1 + R2' + 1 represent?**

A: This is the subtraction operation R3 ← R1 − R2. R2' is the 1's complement of R2; adding 1 gives the 2's complement; then adding R1 performs R1 − R2.

**Q4. Describe the four types of micro-operations.**

A: (1) Register transfer: moves data between registers unchanged. (2) Arithmetic: add, subtract, increment, decrement, complement. (3) Logical: AND, OR, XOR, NOT on individual bits. (4) Shift: move bits left or right within a register.

**Q5. What is the difference between logical and arithmetic shift?**

A: In a logical shift, 0 fills the vacated bit position. In an arithmetic right shift, the sign bit is replicated to preserve the sign of a signed number. In arithmetic left shift, 0 fills the LSB but the sign bit must not change.

---

## Unit 06: Instruction Codes and Instruction Cycles

### Summary

Describes how a basic computer is organized around a stored program, how instructions are encoded, the role of each computer register, the common bus system connecting them, hardwired vs. microprogrammed control, and the four-phase instruction cycle.

### Key Definitions and Concepts

- **Program:** A set of instructions specifying operations, operands, and their sequence.
- **Instruction Code:** A binary code specifying a micro-operation sequence. Consists of an operation code and an address.
- **Stored Program Organization:** Instructions and data reside in the same memory. PC points to the next instruction.
- **Instruction format (basic computer):** 16 bits total — bit 15: I (direct/indirect), bits 12–14: opcode (3 bits), bits 0–11: address (12 bits → can address 4096 = 4K words).
- **Accumulator (AC):** Single processor register used in most operations.
- **Direct Address:** Address bits point directly to the memory location of the operand.
- **Indirect Address:** Address bits point to a memory location that contains the effective address.
- **Effective Address:** The actual memory address of the operand (or branch target).
- **Key Registers:**
  - **PC (12 bits):** Program Counter — holds address of next instruction.
  - **AR (12 bits):** Address Register — holds memory address for current access.
  - **IR (16 bits):** Instruction Register — holds the fetched instruction.
  - **DR (16 bits):** Data Register — holds data being transferred.
  - **AC (16 bits):** Accumulator — main ALU register.
  - **TR (16 bits):** Temporary Register.
  - **INPR (8 bits):** Input Register.
  - **OUTR (8 bits):** Output Register.
- **Hardwired Control:** Control logic built from gates, flip-flops, decoders — fast but inflexible.
- **Microprogrammed Control:** Control information stored in a control memory — flexible but slower.
- **Sequence Counter (SC):** 4-bit counter that generates timing signals T0–T15.

### Instruction Cycle Phases

1. **Fetch:** T0: AR←PC; T1: IR←M[AR], PC←PC+1
2. **Decode:** T2: Decode IR(12–14), AR←IR(0–11), I←IR(15)
3. **Indirect address (if I=1):** T3 (D7'IT3): AR←M[AR]
4. **Execute:** T4 onward — depends on instruction type

### Instruction Types (after decode at T3)

- D7=0: Memory Reference Instruction (MRI)
- D7=1, I=0: Register Reference Instruction
- D7=1, I=1: Input-Output Instruction

### Key MRI Micro-operations

| Instruction | Operation |
|-------------|-----------|
| AND to AC | D0T4: DR←M[AR]; D0T5: AC←AC∧DR, SC←0 |
| ADD to AC | D1T4: DR←M[AR]; D1T5: AC←AC+DR, E←Cout, SC←0 |
| LOAD AC | D2T4: DR←M[AR]; D2T5: AC←DR, SC←0 |
| STORE AC | D3T4: M[AR]←AC, SC←0 |
| BUN (Branch) | D4T4: PC←AR, SC←0 |
| ISZ | Increment M[AR]; if result=0, PC←PC+1 |

### Exam Questions and Answers

**Q1. What are the four phases of the instruction cycle?**

A: (1) Fetch instruction from memory, (2) Decode the instruction, (3) Read the effective address from memory (if indirect), (4) Execute the instruction.

**Q2. How is a direct address different from an indirect address?**

A: In direct addressing, the address field contains the actual address of the operand. In indirect addressing, the address field points to a memory location that contains the effective (actual) address — a two-step lookup.

**Q3. What is the role of the sequence counter (SC)?**

A: The SC is a 4-bit counter that generates 16 timing signals T0–T15 in sequence. It is incremented each clock pulse and cleared to 0 when an instruction completes, causing control to return to T0 for the next instruction.

**Q4. How does the control unit distinguish between instruction types?**

A: Based on decoder output D7 and flip-flop I: D7=0 → MRI; D7=1, I=0 → Register Reference; D7=1, I=1 → I/O instruction.

**Q5. What register holds the address of the next instruction to be executed?**

A: The **Program Counter (PC)**, which is a 12-bit register.

**Q6. What are the differences between hardwired and microprogrammed control?**

A: Hardwired is implemented directly in gates and flip-flops — fast, but difficult to modify. Microprogrammed stores control in memory — flexible and easier to change, but slower.

---

## Unit 07: Machine Language

### Summary

Covers the categories of machine language (binary, octal/hex, symbolic, high-level), the 25 basic computer instructions, assembly language structure (label, instruction, comment fields), pseudo-instructions, the two-pass assembly process, and program loops.

### Key Definitions and Concepts

- **Binary Code:** Raw binary instructions — machine directly understands but humans cannot easily read.
- **Symbolic Code (Assembly Language):** Uses mnemonics (three-letter symbols) for opcodes and symbolic addresses.
- **High-Level Language:** Problem-oriented; translated by a compiler (e.g., Fortran, C).
- **Assembler:** Program that translates symbolic (assembly) code into binary object code.
- **Source Program:** The symbolic assembly language input to the assembler.
- **Object Program:** The binary output of the assembler.
- **Assembly language line fields:** Label (symbolic address, terminated by comma), Instruction (opcode + address), Comment (preceded by slash /).
- **Symbolic address:** 1–3 alphanumeric characters; first character must be a letter.
- **MRI (Memory Reference Instruction):** 3-letter opcode + symbolic address [+ I for indirect].
- **Non-MRI:** Register-reference or I/O instruction; no address part (e.g., CLA, CLE, HLT).
- **Pseudo-instructions:** Assembler directives, not machine instructions.
  - ORG N: Set location counter to hex N
  - END: End of symbolic program
  - DEC N: Signed decimal constant N
  - HEX N: Hexadecimal constant N
- **Two-pass assembly:**
  - Pass 1: Scan program, build Address Symbol Table (label → address), no translation.
  - Pass 2: Translate using four lookup tables (pseudo, MRI, non-MRI, address symbol).
- **Location Counter (LC):** Tracks the current memory address during assembly.
- **Program Loop:** A sequence of instructions executed multiple times with different data.
- **Pointer:** Holds the address of the current operand.
- **Counter:** Counts loop iterations (initialized to −n; when it reaches 0, loop ends).
- **Index Register:** A processor register used as a pointer or counter; enables indirect addressing loops.

### 25 Basic Computer Instructions (Selected)

| Symbol | Hex Code | Operation |
|--------|----------|-----------|
| AND | 0 or 8 | AND M to AC |
| ADD | 1 or 9 | ADD M to AC, carry→E |
| LDA | 2 or A | Load AC from M |
| STA | 3 or B | Store AC in M |
| BUN | 4 or C | Branch unconditionally to M |
| BSA | 5 or D | Save return address in M; branch to M+1 |
| ISZ | 6 or E | Increment M; skip if zero |
| CLA | 7800 | Clear AC |
| CLE | 7400 | Clear E |
| CMA | 7200 | Complement AC |
| INC | 7020 | Increment AC |
| SPA | 7010 | Skip if AC positive |
| SNA | 7008 | Skip if AC negative |
| HLT | 7001 | Halt computer |
| INP | F800 | Input character to AC |
| OUT | F400 | Output character from AC |
| ION | F080 | Turn interrupt ON |
| IOF | F040 | Turn interrupt OFF |

### Exam Questions and Answers

**Q1. What are the four categories of machine language programs?**

A: (1) Binary code — raw binary. (2) Octal/Hexadecimal code — equivalent hex/octal. (3) Symbolic code — mnemonics and symbolic addresses (assembly language). (4) High-level languages — problem-oriented (Fortran, C, etc.).

**Q2. What is the difference between an MRI and a Non-MRI instruction?**

A: An MRI (Memory Reference Instruction) contains an opcode and an address (e.g., LDA X, ADD Y). A Non-MRI (register-reference or I/O) has only an opcode with no address (e.g., CLA, HLT, INP).

**Q3. Describe what happens in each pass of a two-pass assembler.**

A: Pass 1: Scans the entire program, assigns memory locations to each instruction/operand, builds the Address Symbol Table mapping labels to their addresses. Pass 2: Translates each instruction to binary using four lookup tables (pseudo, MRI, non-MRI, address symbol).

**Q4. What are pseudo-instructions?**

A: Pseudo-instructions (ORG, END, DEC, HEX) are directives to the assembler itself, not actual machine instructions. They tell the assembler where to place code (ORG), mark the program end (END), or define constant values (DEC, HEX).

**Q5. How is a program loop implemented in assembly language?**

A: A counter is initialized to a negative count (e.g., −100). A pointer holds the address of the first operand. Inside the loop, the ISZ instruction increments the counter; when it reaches 0 (skip condition), the loop ends. BUN branches back to the loop start when no skip occurs.

---

## Unit 08: Machine Programming

### Summary

Covers software implementations of operations not available in hardware (OR, multiply), shift programming, subroutines and the BSA linkage mechanism, input/output character programming, interrupt-driven I/O, and the interrupt service routine.

### Key Definitions and Concepts

- **Subroutine:** A reusable self-contained sequence of instructions. Called from multiple places in a program.
- **BSA (Branch and Save Address):** The basic computer's subroutine call instruction. Saves the return address in the first location of the subroutine; branches to subroutine+1.
- **Subroutine Linkage:** The mechanism for branching to a subroutine (call) and returning (return). First memory location of subroutine holds the return address.
- **Subroutine Return:** An indirect BUN instruction using the first location of the subroutine.
- **Index Register:** In computers with multiple registers, used to implement subroutine linkage.
- **OR operation (software):** Not a hardware instruction in the basic computer. Implemented using De Morgan's: A+B = (A'·B')'. Program: load A, complement, store temp; load B, complement, AND with temp, complement result.
- **Logical shift-right:** CLE; CIR (Clear E, then Circulate Right — 0 enters from left)
- **Logical shift-left:** CLE; CIL (Clear E, then Circulate Left — 0 enters from right)
- **Arithmetic shift-right:** CLE; SPA; CME; CIR (set E to sign bit, then circulate right)
- **Arithmetic shift-left:** CLE; CIL (0 fills LSB; sign bit must remain unchanged)
- **Input character (INP):** Check SKI (skip if input flag=1); INP (transfer character to AC bits 0-7); OUT (echo character).
- **Output character (OUT):** Check SKO (skip if output flag=1); OUT (transfer AC to output device).
- **Program Interrupt:** Allows CPU to work on other tasks while waiting for I/O. When a flag is set, CPU is interrupted, saves return address to location 0, and executes a service routine from location 1.
- **ION:** Turn interrupt facility on. **IOF:** Turn interrupt facility off.
- **Interrupt service routine tasks:** Save registers, check which flag is set, service the device, restore registers, turn interrupt on, return to running program.
- **Buffer:** A section of memory where the symbolic program or I/O characters are stored.
- **Baud Rate:** Rate at which serial data is transmitted (bits per second).

### Exam Questions and Answers

**Q1. How does the basic computer implement OR using only AND and NOT?**

A: By De Morgan's theorem: A OR B = (A' AND B')'. Steps: complement A → store; complement B → AND with stored A' → complement the result. Seven assembly instructions implement this.

**Q2. How does the BSA instruction implement subroutine calls?**

A: BSA saves the current PC value (return address) in the first memory location of the subroutine, then loads PC with subroutine address + 1, branching into the subroutine body. Return is done with an indirect BUN to the subroutine's first location.

**Q3. What is the difference between programmed I/O and interrupt-driven I/O?**

A: Programmed I/O: CPU continuously polls the flag bit, wasting time in a busy loop. Interrupt I/O: CPU continues executing other code; the I/O device sets a flag and sends an interrupt request; CPU then services it. Interrupt I/O is far more efficient.

**Q4. What must an interrupt service routine do before returning?**

A: (1) Save AC and E contents. (2) Check which flag caused the interrupt. (3) Service the I/O device. (4) Restore AC and E. (5) Turn interrupt ON (ION). (6) Execute indirect BUN to location 0 (the saved return address).

**Q5. Why is the highest-priority device serviced first during interrupt handling?**

A: Because the service routine checks flags sequentially; the first flag checked determines which device is serviced first. Priority is established by the order of checking.

---

## Unit 09: Register Organization

### Summary

Covers CPU structure (register set, ALU, control), general register organization with a common bus and multiplexers, the 14-bit control word concept, the stack data structure (PUSH/POP), register stack vs. memory stack, and expression evaluation using postfix notation.

### Key Definitions and Concepts

- **CPU Components:** Register set (stores data), ALU (performs operations), Control unit (manages data flow).
- **General Register Organization:** Multiple registers connected via two buses (A and B) to a common ALU. Outputs go to all registers; a decoder selects the destination.
- **Multiplexer A (MUX A):** Selects source register for ALU's A input.
- **Multiplexer B (MUX B):** Selects source register for ALU's B input.
- **Decoder (SELD):** Selects the destination register from the ALU output bus.
- **Control Word:** 14-bit word specifying a complete micro-operation. Four fields:
  - SELA (3 bits): Source for ALU input A
  - SELB (3 bits): Source for ALU input B
  - SELD (3 bits): Destination register
  - OPR (5 bits): ALU operation to perform
- **Stack:** Last-In, First-Out (LIFO) storage. The stack pointer (SP) always points to the top.
- **PUSH operation:** SP← SP+1; M[SP]←DR. If SP reaches limit, FULL=1.
- **POP operation:** DR←M[SP]; SP←SP−1. If SP=0, EMTY=1.
- **Register Stack:** Fixed collection of registers used as a stack (e.g., 64-word stack).
- **Memory Stack:** Stack implemented in a portion of RAM, with SP as a processor register.
- **INFIX notation:** Operator between operands: A+B
- **PREFIX (Polish) notation:** Operator before operands: +AB
- **POSTFIX (Reverse Polish) notation:** Operator after operands: AB+. Best for stack evaluation.
- **Postfix evaluation using stack:** Scan left to right; push operands; when operator found, pop two operands, apply operator, push result.

### Postfix Evaluation Example

Expression: (3 × 4) + (5 × 6) = in postfix: **3 4 * 5 6 * +**

| Step | Action | Stack |
|------|--------|-------|
| Scan 3 | PUSH 3 | [3] |
| Scan 4 | PUSH 4 | [3, 4] |
| Scan * | POP 4, POP 3; 3×4=12; PUSH 12 | [12] |
| Scan 5 | PUSH 5 | [12, 5] |
| Scan 6 | PUSH 6 | [12, 5, 6] |
| Scan * | POP 6, POP 5; 5×6=30; PUSH 30 | [12, 30] |
| Scan + | POP 30, POP 12; 12+30=42; PUSH 42 | [42] |

Result: **42**

### Exam Questions and Answers

**Q1. What are the three main components of a CPU?**

A: Register set (stores intermediate and final results, addresses, and control data), ALU (performs arithmetic and logic operations), and Control unit (coordinates data movement and sequencing of micro-operations).

**Q2. What is a control word and what are its fields?**

A: A 14-bit word that specifies a complete micro-operation: SELA (3 bits, source A), SELB (3 bits, source B), SELD (3 bits, destination), OPR (5 bits, ALU operation). When applied to the register unit's selection inputs, it directs one complete data transfer and operation.

**Q3. Distinguish between PUSH and POP stack operations.**

A: PUSH inserts data on top of the stack — SP is incremented first, then the data is written to M[SP]. POP removes data from top — data is read from M[SP], then SP is decremented.

**Q4. What is the advantage of using postfix notation for arithmetic expressions?**

A: Postfix (Reverse Polish Notation) needs no parentheses, and operators appear in the order of evaluation. It can be evaluated left-to-right using a simple stack algorithm with no backtracking.

**Q5. Convert (A+B)×(C+D) to postfix notation.**

A: **AB+CD+×**

---

## Unit 10: Addressing Modes

### Summary

Covers instruction format fields (opcode, address, mode), the three types of CPU organization (single accumulator, general register, stack), instruction formats with different numbers of addresses (0 to 3), RISC-style instructions, and all major addressing modes with their effective address computations.

### Key Definitions and Concepts

- **Instruction Fields:** Operation code (what to do), Address field (where the operand is), Mode field (how to interpret the address).
- **Effective Address:** The actual memory address used to access the operand, computed from the mode.
- **CPU Organizations:**
  - Single Accumulator: One register (AC); instructions use one address field (ADD X means AC←AC+M[X]).
  - General Register: Multiple registers; instructions use 2 or 3 address fields.
  - Stack: Zero-address computational instructions; PUSH/POP use one address.
- **Three-Address Instruction:** ADD R1, A, B → R1←M[A]+M[B]. Shortest programs, longest instructions.
- **Two-Address Instruction:** ADD R1, B → R1←R1+M[B]. Most common format.
- **One-Address Instruction:** ADD X → AC←AC+M[X]. Uses implied accumulator.
- **Zero-Address Instruction:** Stack computer — PUSH A; PUSH B; ADD → TOS←A+B.
- **RISC Instruction:** Only LOAD/STORE access memory; all other instructions use registers only. Largest number of instructions but simplest execution.

### Addressing Modes Table

| Mode | Effective Address (EA) | Notes |
|------|------------------------|-------|
| Implied | No EA needed | Operand implied (e.g., CLA uses AC) |
| Immediate | EA = instruction itself (address field IS the operand) | Fast; no memory access for operand |
| Register | No EA; operand is in specified register | Fastest; no memory access |
| Register Indirect | EA = contents of register (R) | Register holds address, not data |
| Auto-increment | EA = R; then R←R+1 | Useful for sequential table access |
| Auto-decrement | R←R−1; then EA = R | Useful for sequential table access (reverse) |
| Direct | EA = address field of instruction | Simple; one memory access |
| Indirect | EA = M[address field] | Two memory accesses |
| Relative | EA = PC + address field (signed offset) | Used for branches; compact |
| Indexed | EA = XR + address field | Array access; XR = index register |
| Base Register | EA = Base + address field | Program relocation; Base = segment start |

### Addressing Mode Numerical Example

Instruction at address 200-201; address field = 500; PC = 202 after fetch; R1 = 400; XR = 100.

| Mode | EA | Operand Loaded into AC |
|------|----|------------------------|
| Direct | 500 | M[500] = 800 |
| Immediate | 201 | 500 (the address field itself) |
| Indirect | M[500] = 800 | M[800] = 300 |
| Relative | 202 + 500 = 702 | M[702] = 325 |
| Indexed | 100 + 500 = 600 | M[600] = 900 |
| Register | — | R1 = 400 |
| Register Indirect | R1 = 400 | M[400] = 700 |
| Auto-increment | R1=400; R1→401 | M[400] = 700 |
| Auto-decrement | R1→399 | M[399] = 450 |

### X = (A+B)×(C+D) — Evaluation with Different Address Instructions

**Three-address:**
```
ADD R1, A, B     → R1 ← M[A] + M[B]
ADD R2, C, D     → R2 ← M[C] + M[D]
MUL X, R1, R2   → M[X] ← R1 × R2
```

**Zero-address (stack):**
```
PUSH A; PUSH B; ADD;  PUSH C; PUSH D; ADD;  MUL;  POP X
```

### Exam Questions and Answers

**Q1. What are the three fields of a typical instruction format?**

A: Operation code (specifies operation), Address field (specifies operand location or register), Mode field (specifies how to find or compute the effective address).

**Q2. What is the effective address?**

A: The actual memory address from which the operand is retrieved (or to which a branch goes), computed according to the addressing mode from the address field of the instruction.

**Q3. Explain the difference between direct and indirect addressing.**

A: In direct addressing, the address field contains the operand's memory address directly (one memory access). In indirect addressing, the address field points to a memory location that contains the effective address — requiring two memory accesses.

**Q4. Why is RISC instruction design beneficial?**

A: RISC keeps all computational instructions register-to-register (no memory operands), simplifying the instruction set and enabling efficient pipelining. Only LOAD and STORE access memory, which is the slowest component.

**Q5. What is the difference between indexed and base-register addressing?**

A: Indexed: EA = index register + address field. The index register holds a displacement from a known base (used for array access). Base-register: EA = base register + address field. The base register holds the base of a memory segment (used for program relocation in multiprogramming).

**Q6. What is relative addressing mode and when is it used?**

A: EA = PC + signed offset in address field. Used primarily for branch instructions, allowing position-independent code. The short offset can be specified with fewer bits than a full memory address.

---

## Unit 11: Pipeline Processing

### Summary

Covers the concept and motivation for parallel processing, Flynn's taxonomy (SISD, SIMD, MISD, MIMD), pipelining fundamentals, arithmetic pipelines (floating-point), instruction pipelines, the four-segment pipeline, pipeline hazards (data dependency, branch), and methods to handle them.

### Key Definitions and Concepts

- **Parallel Processing:** Simultaneous execution of multiple tasks to increase throughput and computational speed.
- **Throughput:** The number of tasks completed per unit time.
- **Flynn's Classification:**
  - **SISD:** Single Instruction Single Data — conventional sequential computer.
  - **SIMD:** Single Instruction Multiple Data — one control unit, many processors on different data (e.g., vector processors, GPUs).
  - **MISD:** Multiple Instruction Single Data — theoretical only; no practical implementation.
  - **MIMD:** Multiple Instruction Multiple Data — multiple independent processors (multiprocessors, clusters).
- **Pipelining:** Decomposing a task into sequential sub-operations (stages), each handled by a dedicated segment. Multiple tasks overlap — while one is in stage 2, the next begins stage 1.
- **Pipeline Segment:** Each segment has an input register (for synchronization) followed by a combinational circuit.
- **Arithmetic Pipeline:** Used for floating-point operations. Four stages for floating-point addition: (1) Compare exponents, (2) Align mantissas, (3) Add/subtract mantissas, (4) Normalize result.
- **Overflow (pipeline):** Mantissa shifted right and exponent incremented by 1.
- **Underflow (pipeline):** Number of leading zeros determines left shifts and exponent decrement.
- **Instruction Pipeline:** Overlaps fetch and execute phases. Implemented with a FIFO instruction buffer.
- **Four-Segment Instruction Pipeline:** (1) Fetch instruction (FI), (2) Decode + compute effective address (DA), (3) Fetch operand (FO), (4) Execute (EX).
- **Pipeline Hazard:** A condition that prevents the next instruction from executing in its assigned clock cycle.
- **Data Dependency:** An instruction needs data that are not yet produced by a previous instruction still in the pipeline.
- **Address Dependency:** Operand address cannot be computed because required information is unavailable.
- **Branching Hazard:** A branch instruction disrupts the sequential flow; all instructions after the branch in the pipeline must be discarded.

### Handling Pipeline Hazards

**Data Dependency solutions:**
1. **Hardware Interlocks:** Stall the pipeline until needed data is available.
2. **Operand Forwarding:** Forward result directly from ALU output to next instruction's input without waiting for write-back.
3. **Delayed Load:** Compiler reorders instructions to place non-dependent instructions after a load (fills the delay slot).

**Branching solutions:**
1. **Prefetch Target Instruction:** Fetch both the sequential and branch target instructions.
2. **Branch Target Buffer:** Cache recently branched-to addresses.
3. **Loop Buffer:** Small fast memory holding the instructions of a loop.
4. **Branch Prediction:** Guess (statically or dynamically) whether a branch will be taken.
5. **Delayed Branch:** Compiler fills the branch delay slot with a useful instruction.

### Floating-Point Pipeline Example

X = 0.9504 × 10³, Y = 0.8200 × 10²

1. Segment 1: Compare exponents: 3−2 = 1; larger exponent = 3.
2. Segment 2: Align Y: Y = 0.08200 × 10³
3. Segment 3: Add: Z = 0.9504 + 0.0820 = 1.0324 × 10³
4. Segment 4: Normalize: Z = 0.10324 × 10⁴

### Exam Questions and Answers

**Q1. What is pipelining and why is it used?**

A: Pipelining decomposes a sequential task (e.g., instruction execution) into overlapping sub-stages. While one instruction is in stage 2, the next enters stage 1. This increases throughput (instructions completed per unit time) without increasing clock frequency.

**Q2. Explain Flynn's classification of computer organizations.**

A: SISD: one instruction, one data stream (conventional computer). SIMD: one instruction applied to multiple data items simultaneously (e.g., vector processors). MISD: multiple instructions on same data — theoretical. MIMD: multiple independent instructions on multiple data streams (multiprocessor systems).

**Q3. What is data dependency in a pipeline and how is it handled?**

A: Data dependency occurs when an instruction needs a value that is not yet computed by a previous instruction still in the pipeline. Solutions: hardware interlocks (stall), operand forwarding (pass result directly), or delayed load (compiler reordering).

**Q4. Why does a branch instruction cause problems in a pipeline?**

A: After a branch, the instructions already loaded into the pipeline (fetched sequentially) may be the wrong ones if the branch is taken. The pipeline must be flushed and restarted from the branch target, wasting pipeline cycles.

**Q5. What are the four stages of a floating-point addition pipeline?**

A: (1) Compare exponents — determine which is larger. (2) Align mantissas — shift the smaller number's mantissa right by the exponent difference. (3) Add or subtract the mantissas. (4) Normalize the result — shift mantissa and adjust exponent.

---

## Unit 12: Memory Technology

### Summary

Covers the memory hierarchy (registers → cache → main memory → auxiliary), RAM/ROM chips, memory address maps, associative memory, cache memory and mapping processes (direct, associative, set-associative), virtual memory, and the memory management unit (MMU).

### Key Definitions and Concepts

- **Main Memory:** Directly communicates with CPU; fast, relatively expensive semiconductor memory (RAM and ROM).
- **Auxiliary Memory:** Backup storage (magnetic disks, tapes); large capacity, low cost, slow access.
- **Cache Memory:** Very fast, small memory between CPU and main memory. Compensates for speed mismatch.
- **Memory Hierarchy (speed/cost/capacity):** Registers > Cache > Main Memory > Auxiliary Memory (fastest and most expensive → slowest and cheapest).
- **Static RAM (SRAM):** Uses flip-flops; retains data as long as power is on; fast; expensive. Used for cache.
- **Dynamic RAM (DRAM):** Stores bits as capacitor charges; must be refreshed periodically; higher density; cheaper. Used for main memory.
- **ROM:** Read-Only Memory; non-volatile; stores bootstrap loader and permanent programs.
- **Bootstrap Loader:** Program stored in ROM; initializes the computer on power-up, loads the OS.
- **Multiprogramming:** Multiple programs coexist in different parts of the memory hierarchy simultaneously.
- **Memory Address Map:** Table specifying address ranges assigned to each memory chip (RAM or ROM).
- **Associative Memory (Content Addressable Memory, CAM):** Accessed by data content rather than address. All words searched simultaneously in parallel. Uses argument register (A), key register (K), and match register (M).
- **Cache Mapping Methods:**
  - **Direct Mapping:** Each main memory block maps to exactly one cache line. Cache line = block address mod (number of cache lines). Simple but causes conflicts.
  - **Associative Mapping:** A block can go in any cache line. Full flexibility, requires parallel search. Most expensive.
  - **Set-Associative Mapping:** Cache divided into sets; a block maps to a specific set but can go in any line within that set. Compromise between direct and associative.
- **Cache Hit:** Data found in cache (fast).
- **Cache Miss:** Data not in cache; must fetch from main memory.
- **Write-back policy:** Write to cache only; write to main memory when the cache line is replaced.
- **Write-through policy:** Write to both cache and main memory simultaneously.
- **Virtual Memory:** Technique allowing programs larger than physical memory to run. Uses disk as an extension of RAM.
- **Page:** Fixed-size block (typically 4KB) used in virtual memory systems.
- **Page Table:** Maps virtual page numbers to physical frame numbers.
- **TLB (Translation Lookaside Buffer):** Fast cache for page table entries.
- **Logical (Virtual) Address:** Address generated by the CPU.
- **Physical (Real) Address:** Actual address in main memory.
- **Memory Management Unit (MMU):** Hardware that translates virtual addresses to physical addresses.
- **Segment:** Variable-size unit for program organization (code, data, stack segments).

### Memory Hierarchy Summary

| Level | Speed | Cost | Capacity |
|-------|-------|------|----------|
| Registers | Fastest | Highest | Bytes |
| Cache (L1/L2) | Very fast | High | KB–MB |
| Main Memory (DRAM) | Fast | Medium | GB |
| Auxiliary (Disk/SSD) | Slow | Low | TB |

### Exam Questions and Answers

**Q1. What is the purpose of cache memory?**

A: Cache compensates for the speed mismatch between the fast CPU and slower main memory. It stores recently used instructions and data so the CPU can access them at near-processor speed, reducing the average memory access time.

**Q2. Distinguish between SRAM and DRAM.**

A: SRAM uses flip-flops; retains data without refresh; faster; used for cache. DRAM stores charges on capacitors; must be refreshed periodically; slower but higher density and lower cost; used for main memory.

**Q3. What is associative memory and what are its advantages?**

A: Associative (content-addressable) memory is searched by content rather than address. All words are searched in parallel simultaneously. Advantage: very fast search time. Disadvantage: expensive due to added comparison logic in each cell.

**Q4. Compare direct mapping and associative mapping in cache.**

A: Direct mapping: each main memory block has exactly one possible cache location (fast, simple, but conflict-prone). Associative mapping: a block can go anywhere in cache (no conflicts, but requires parallel tag comparison — expensive). Set-associative is a practical compromise.

**Q5. What is virtual memory and why is it useful?**

A: Virtual memory allows programs to use an address space larger than physical memory by using disk as an extension. The OS manages moving pages between disk and RAM. Programs behave as if they have a large contiguous address space regardless of physical memory size.

**Q6. What does the MMU do?**

A: The Memory Management Unit translates virtual (logical) addresses generated by the CPU into physical (real) memory addresses. It uses the page table (and TLB for speed) to perform this mapping at runtime.

**Q7. What is the role of the bootstrap loader?**

A: The bootstrap loader is a small program stored in ROM. When power is turned on, the CPU begins executing it. It loads the operating system from disk into RAM and transfers control to the OS, preparing the computer for use.

---

## Unit 13: I/O Subsystems

### Summary

Covers peripheral devices, ASCII encoding, I/O interface, the I/O bus and its commands, I/O vs. memory bus configurations, strobe and handshaking data transfer methods, serial vs. parallel transmission, and the three modes of data transfer (programmed, interrupt, DMA).

### Key Definitions and Concepts

- **Peripheral Device:** Any device connected online under direct computer control (keyboard, monitor, printer, disks).
- **ASCII:** American Standard Code for Information Interchange. 7-bit code representing 128 characters (94 printable + 34 control). Extended to 8 bits (1 byte) in practice.
- **ASCII Control Characters:**
  - Format effectors: control text layout (BS, HT, CR).
  - Information separators: divide data into pages/paragraphs (RS, FS).
  - Communication control: used in remote transmission (ETX, STX).
- **I/O Interface:** Hardware unit that resolves differences between CPU and peripheral (signal levels, data rates, formats, operational modes).
- **I/O Bus:** Consists of data lines, address lines, and control lines connecting CPU to peripheral interfaces.
- **I/O Commands (four types):**
  1. Control: Activate peripheral (e.g., rewind tape).
  2. Status: Query device state before transfer.
  3. Data Output: Transfer data from bus to device.
  4. Data Input: Transfer data from device to bus.
- **Isolated I/O:** Separate address spaces for memory and I/O; separate read/write control lines for each.
- **Memory-Mapped I/O:** I/O interface registers share the same address space as memory; no special I/O instructions needed. Load/store instructions work for both memory and I/O.
- **IOP (I/O Processor):** Independent processor that handles I/O transfers, freeing the CPU.
- **Strobe:** A single control signal pulse that indicates when data is valid on the bus. No acknowledgment — source cannot confirm data was received.
- **Handshaking:** Two-signal protocol. Source asserts "data valid"; destination responds with "data accepted." Eliminates the uncertainty of strobe-only control.
- **Timeout:** Error detection mechanism — if handshake reply doesn't arrive within a time limit, an error is assumed.
- **Parallel Transmission:** All bits sent simultaneously on separate wires. Fast; used for short distances.
- **Serial Transmission:** Bits sent one at a time on a single wire. Slower; used for long distances; less expensive.
- **Synchronous Serial:** Common clock; bits transmitted continuously.
- **Asynchronous Serial:** No common clock; each character framed by start bit (0) and stop bit(s) (1).
- **Baud Rate:** Rate of serial transmission in bits per second.
- **Programmed I/O:** CPU continuously polls the device flag. Inefficient — CPU is busy-waiting.
- **Interrupt-Initiated I/O:** Device interrupts CPU when ready. CPU works on other tasks between transfers.
- **DMA (Direct Memory Access):** Device controller transfers data directly to/from memory using the memory bus, bypassing the CPU for bulk transfers. CPU only initiates the transfer (provides starting address and word count).

### I/O vs. Memory Bus Options

| Configuration | Description |
|---------------|-------------|
| Two separate buses | Memory bus for RAM; I/O bus for peripherals |
| One common bus, separate control | Common address/data bus; separate read/write lines for I/O and memory |
| One common bus, common control | Memory-mapped I/O — I/O registers appear as memory addresses |

### Exam Questions and Answers

**Q1. What is ASCII and how many characters does it encode?**

A: ASCII (American Standard Code for Information Interchange) is a 7-bit code that encodes 128 characters: 94 printable (26 uppercase, 26 lowercase, 10 digits, 32 special) and 34 non-printing control characters.

**Q2. What are the four types of I/O commands?**

A: Control (activate peripheral), Status (test device condition), Data Output (interface transfers data from bus to device), Data Input (interface receives data from device into buffer register).

**Q3. Compare strobe and handshaking data transfer methods.**

A: Strobe: one control signal indicates when data is valid; no acknowledgment — sender cannot confirm receipt. Handshaking: two control signals — source asserts "data valid," destination responds "data accepted." Handshaking is more reliable.

**Q4. Distinguish between programmed I/O, interrupt I/O, and DMA.**

A: Programmed I/O: CPU busy-polls the device flag continuously (CPU is occupied). Interrupt I/O: device signals CPU when ready; CPU is free to do other work between transfers. DMA: device controller transfers data directly to/from memory without CPU involvement for each word; CPU is only involved at start/end.

**Q5. What is the difference between memory-mapped I/O and isolated I/O?**

A: Isolated I/O: separate address spaces and control lines for I/O and memory; requires special IN/OUT instructions. Memory-mapped I/O: I/O interface registers share the memory address space; normal load/store instructions access I/O. Memory-mapped is simpler programmatically.

**Q6. Describe asynchronous serial transmission format.**

A: Each character is framed: a start bit (always 0) marks the beginning, followed by 7 or 8 data bits, and one or two stop bits (always 1). Receiver detects the start bit by the line going from 1 to 0, then samples at the correct bit intervals.

---

## Unit 14: Hardware Description Logic (HDL)

### Summary

Introduces Hardware Description Languages (HDLs), specifically Verilog (and briefly VHDL), covering Verilog program structure, operators (arithmetic, logical, bitwise, reduction, relational, equity, conditional), and Verilog code implementations for basic gates, adders, multiplexers, demultiplexers, encoders, and decoders.

### Key Definitions and Concepts

- **HDL (Hardware Description Language):** A language for describing digital hardware structure and behavior, which can be synthesized into actual circuits.
- **Verilog:** "Verify Logic." Case-sensitive, vendor-independent HDL. Supports simulation and synthesis. Basic unit: **module**.
- **VHDL:** VHSIC Hardware Description Language (VHSIC = Very High Speed Integrated Circuit). Describes behavior and organization at multiple abstraction levels.
- **Module:** The basic building block in Verilog — defined between `module` and `endmodule` keywords.
- **`assign` statement:** Continuous assignment — output is always updated when inputs change (combinational logic).
- **Comments:** `//` for single line; `/* ... */` for multi-line.
- **Input declaration:** `input a, b;` (1-bit); `input [3:0] a;` (4-bit bus).
- **Conditional operator:** `condition ? true_expression : false_expression`

### Verilog Operators

| Type | Operators | Description |
|------|-----------|-------------|
| Arithmetic | + − * / % ** | Add, sub, multiply, divide, modulus, power |
| Logical | && \|\| ! | Logical AND, OR, NOT |
| Bitwise | ~ & \| ^ | NOT, AND, OR, XOR (bit-by-bit) |
| Reduction | &A \|A ^A | AND/OR/XOR all bits of A |
| Relational | > < >= <= | Comparison |
| Equality | == != | Equal, not equal |
| Conditional | ?: | Multiplexer/if-else |

### Verilog Code for Basic Gates

```verilog
// NOT gate
module not_gate(input a, output c);
  assign c = ~a;
endmodule

// OR gate
module or_gate(input a, input b, output c);
  assign c = a | b;
endmodule

// AND gate
module and_gate(input a, input b, output c);
  assign c = a & b;
endmodule

// NAND gate
module nand_gate(input a, input b, output c);
  assign c = ~(a & b);
endmodule

// NOR gate
module nor_gate(input a, input b, output c);
  assign c = ~(a | b);
endmodule

// XOR gate
module xor_gate(input a, input b, output c);
  assign c = a ^ b;
endmodule

// XNOR gate
module xnor_gate(input a, input b, output c);
  assign c = ~(a ^ b);
endmodule
```

### Verilog Code for Combinational Circuits

```verilog
// Half Adder: Sum=a^b, Carry=a&b
module test_halfadder(input logic a, b, output logic sum, carry);
  assign sum = a ^ b, carry = a & b;
endmodule

// Full Adder
module fullAdder(input logic a, b, Cin, output logic S, Cout);
  assign S = (a ^ b) ^ Cin;
  assign Cout = (a & b) | (b & Cin) | (Cin & a);
endmodule

// 2-to-1 Multiplexer: Z = S ? i0 : i1
module Mux_2_To_1(input logic S, i0, i1, output logic Z);
  assign Z = S ? i0 : i1;
endmodule

// 1-to-4 Demultiplexer
module demultiplexer(input logic d, s1, s2, output logic y0, y1, y2, y3);
  assign y0 = (d & ~s2 & ~s1);
  assign y1 = (d &  s2 & ~s1);
  assign y2 = (d & ~s2 &  s1);
  assign y3 = (d &  s2 &  s1);
endmodule

// 8-to-3 Encoder
module Encoder(input logic d0,d1,d2,d3,d4,d5,d6,d7, output logic x,y,z);
  assign x = (d4 | d5 | d6 | d7);
  assign y = (d2 | d3 | d6 | d7);
  assign z = (d1 | d3 | d5 | d7);
endmodule

// 3-to-8 Decoder
module Decoder(input logic x, y, z, output logic d0,d1,d2,d3,d4,d5,d6,d7);
  assign d0 = (~x & ~y & ~z); assign d1 = (~x & ~y &  z);
  assign d2 = (~x &  y & ~z); assign d3 = (~x &  y &  z);
  assign d4 = ( x & ~y & ~z); assign d5 = ( x & ~y &  z);
  assign d6 = ( x &  y & ~z); assign d7 = ( x &  y &  z);
endmodule
```

### Exam Questions and Answers

**Q1. What is an HDL and why is it used?**

A: A Hardware Description Language describes the structure and behavior of digital hardware in a textual form. HDLs (Verilog, VHDL) are used to design, simulate, and synthesize digital circuits. They allow hardware to be described, tested in simulation, and then automatically translated into actual gate-level circuits.

**Q2. What is the difference between Verilog and VHDL?**

A: Verilog (Verify Logic) is case-sensitive, vendor-independent, C-like syntax, supports simulation and synthesis. VHDL (VHSIC HDL) is more verbose, Ada-like syntax, strongly typed. Both describe hardware at multiple abstraction levels. Verilog is more common in industry; VHDL is common in defense and Europe.

**Q3. Write the Verilog assign statement for a 2-to-1 MUX.**

A: `assign Z = S ? i0 : i1;`
When S=0, Z=i0; when S=1, Z=i1.

**Q4. What does `~(a ^ b)` represent in Verilog?**

A: It implements the XNOR gate — the bitwise NOT of XOR. Output is 1 when both inputs are equal (both 0 or both 1), 0 otherwise.

**Q5. What is the difference between bitwise and logical operators in Verilog?**

A: Bitwise operators (`&`, `|`, `^`, `~`) operate on individual bits of a multi-bit value. Logical operators (`&&`, `||`, `!`) treat the entire operand as a single true/false value (any non-zero = true). For single-bit signals, they are equivalent.

**Q6. Write the Verilog module for a 3-to-8 decoder.**

A: See the decoder module above. Eight `assign` statements generate each of the 8 output minterms (e.g., d0 = ~x & ~y & ~z; d7 = x & y & z).

**Q7. What is the purpose of the `endmodule` keyword in Verilog?**

A: `endmodule` marks the end of a module definition. Everything between `module <name>(ports);` and `endmodule` defines the interface, internal signals, and logic of that hardware block.

---

## Quick Reference: Key Formulas and Facts

| Topic | Formula / Fact |
|-------|----------------|
| 2's complement of N (n-bit) | 2ⁿ − N |
| SOP minimization | Group 1s in K-map |
| POS minimization | Group 0s in K-map |
| K-map cells for n variables | 2ⁿ |
| Half adder: Sum | S = A ⊕ B |
| Half adder: Carry | C = A · B |
| Full adder: Sum | S = A ⊕ B ⊕ Cin |
| Full adder: Carry | Cout = AB + ACin + BCin |
| BCD correction | Add 0110 if sum > 9 or carry=1 |
| MUX output (4-to-1) | Y = I0S1'S0' + I1S1'S0 + I2S1S0' + I3S1S0 |
| Instruction format (basic computer) | 16 bits: [I(1)][opcode(3)][address(12)] |
| D7=0 → | Memory Reference Instruction |
| D7=1, I=0 → | Register Reference Instruction |
| D7=1, I=1 → | I/O Instruction |
| BSA instruction | Saves return address; branches to sub+1 |
| Stack: LIFO | Last-In, First-Out |
| Control word size | 14 bits (SELA=3, SELB=3, SELD=3, OPR=5) |
| Relative EA | PC + signed offset |
| Indexed EA | XR + address field |
| Base EA | Base register + address field |
| SIMD | Same instruction, different data |
| Pipeline hazards | Data dependency, branch |
| ASCII | 7-bit, 128 characters |
| DMA | Direct CPU-free memory transfer |
| Cache hit/miss | Data in/not in cache |
| Virtual memory | Disk extends RAM; paging/segmentation |

---

*End of prep material — 14 units covered.*
