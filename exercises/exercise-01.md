# Exercise 01 — Operators & Type Casting

A few small programs to write from scratch. No copy-pasting.

---

## 1. Calculator
Write a program that takes two floats from the user and prints the result of all 5 arithmetic operations.

Expected output:
```
Enter two numbers: 10 3

Add:      13
Subtract: 7
Multiply: 30
Divide:   3.33333
Modulo:   1
```
> Hint: modulo (`%`) only works on integers — you'll need a cast.

---

## 2. Voting Eligibility
Ask the user for their age. Use a ternary operator to print `"Eligible"` or `"Not eligible"`.

Expected output:
```
Enter age: 16
Not eligible
```

---

## 3. Odd or Even
Ask for a number. Use the `%` operator and an expression (no if/else) to print `"Odd"` or `"Even"`.

> Hint: ternary again.

---

## 4. Explicit Cast
Declare two `int` variables `a = 7` and `b = 2`. Print the result of dividing them:
- Once as integer division
- Once as float division using an explicit cast

Expected output:
```
Integer division: 3
Float division:   3.5
```

---

## 5. Scope Resolution
Create a `Circle` class with a `float radius` (public) and a method `area()` defined **outside** the class using `::`. Use `pi = 3.14`.

Expected output:
```
Enter radius: 5
Area: 78.5
```

---

Good luck — drop the file here when done and I'll evaluate it.
