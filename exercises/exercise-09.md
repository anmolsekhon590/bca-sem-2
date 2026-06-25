# Exercise 09 — Inheritance

---

## 1. Single Inheritance
Create a base class `Animal` with a `string name` and a `void speak()` that prints `"Some sound"`. Derive `Dog` from it and override `speak()` to print `"Woof"`. Create a `Dog` object and call both the base and derived `speak()`.

Expected output:
```
Some sound
Woof
```

---

## 2. Multilevel Inheritance
Create three classes in a chain:
- `Vehicle` — has `void move()` printing `"Vehicle moves"`
- `Car : Vehicle` — has `void fuel()` printing `"Runs on petrol"`
- `SportsCar : Car` — has `void turbo()` printing `"Turbo boost"`

Create a `SportsCar` object and call all three functions.

Expected output:
```
Vehicle moves
Runs on petrol
Turbo boost
```

---

## 3. Multiple Inheritance
Create two base classes:
- `Flyable` — `void fly()` prints `"Can fly"`
- `Swimmable` — `void swim()` prints `"Can swim"`

Derive `Duck` from both. Call both functions on a `Duck` object.

Expected output:
```
Can fly
Can swim
```

---

## 4. Hierarchical Inheritance
Create a base class `Shape` with `float area()` returning 0. Derive `Circle` and `Triangle` from it, each overriding `area()`. Use the correct formula for each.

Expected output:
```
Circle area:   78.5
Triangle area: 12
```

---

## 5. Constructor in Inheritance
Create a base class `Person` with `string name` initialized via constructor. Derive `Employee` from it, adding `int id`. Use `Employee(string n, int i) : Person(n)` to pass the name up to the base constructor. Print both.

Expected output:
```
Name: Anmol | ID: 101
```

---

Good luck — drop files here when done.
