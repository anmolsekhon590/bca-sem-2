# Exercise 08 — More on Constructors & Destructors

---

## 1. Constructor with Default Arguments
Create a `Rectangle` class with `float length` and `float width`. Write a single constructor with default values `Rectangle(float l = 1, float w = 1)`. Call it three ways — no args, one arg, both args.

Expected output:
```
Area: 1
Area: 5
Area: 15
```

---

## 2. Constructor Initializer List
Rewrite the `Rectangle` constructor from above using an initializer list instead of assignment in the body:
```cpp
Rectangle(float l, float w) : length(l), width(w) {}
```
Same behavior, cleaner syntax. Print the area to confirm it works.

Expected output:
```
Area: 50
```

---

## 3. Dynamic Initialization of Objects
Create a `BankAccount` class with `string owner` and `float balance`. Take both values as input from the user in `main` and pass them to the constructor. Print account details after creation.

Expected output:
```
Enter owner name: Anmol
Enter balance: 5000
Account: Anmol | Balance: 5000
```

---

## 4. Constructor Calling Another Constructor (Delegating)
Create a `Circle` class with `float radius` and `string color`. Write:
- `Circle(float r, string c)` — full constructor
- `Circle(float r)` — delegates to the full one with default color `"red"`

Print radius and color for both.

Expected output:
```
Radius: 5, Color: blue
Radius: 3, Color: red
```

---

Good luck — drop files here when done.
