# Exercise 03 — Pointers & Structures

Since you've done pointers in C, these will be fast. Focus on the C++ specific bits.

---

## 1. Basic Pointer
Declare an `int`, point to it, print the value via the pointer, then change the value through the pointer and print again.

Expected output:
```
Value: 10
Value via pointer: 10
After change: 20
```

---

## 2. Pointer Arithmetic
Declare an int array of 5 numbers. Use a pointer and a `for` loop to print all elements — no square brackets allowed.

Expected output:
```
1 2 3 4 5
```

---

## 3. Swap with Pointers
Write a function `swap(int *a, int *b)` that swaps two integers using pointers. Call it from main.

Expected output:
```
Before: a=5 b=10
After:  a=10 b=5
```

---

## 4. C Struct
Define a `struct Student` with `name` (string), `age` (int), and `gpa` (float). Create two students, fill their data, and print them.

Expected output:
```
Name: Alice  Age: 20  GPA: 3.8
Name: Bob    Age: 22  GPA: 3.5
```

---

## 5. Pointer to Struct
Create a `struct Point` with `x` and `y` (both int). Allocate one on the heap with `new`, set values via the pointer using `->`, print, then `delete` it.

Expected output:
```
Point: (4, 7)
```

---

Good luck — drop files here when done.
