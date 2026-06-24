# Exercise 06 — Static Members & Polymorphism

---

## 1. Static Data Member
Create a `Student` class with a static `int count` that tracks how many objects have been created. Increment it in the constructor. Add a static `getCount()` function that returns it.

Expected output:
```
Students created: 3
```

---

## 2. Static Member Function
Create a `MathUtils` class with no instance data — just static functions `add(int a, int b)` and `multiply(int a, int b)`. Call them without creating an object.

Expected output:
```
Add:      8
Multiply: 15
```

---

## 3. Function Overloading (Compile-time Polymorphism)
Write overloaded functions `volume(float side)` (cube), `volume(float r, float h)` (cylinder: `3.14 * r * r * h`), and `volume(float l, float w, float h)` (cuboid). This is compile-time polymorphism — the compiler picks the right function at compile time based on argument types.

Expected output:
```
Cube:     27
Cylinder: 62.8
Cuboid:   24
```

---

## 4. Runtime Polymorphism with Virtual Functions
Create a base class `Shape` with a virtual function `draw()`. Derive `Circle` and `Rectangle` from it, each overriding `draw()`. Use a `Shape*` pointer to call `draw()` on both — the correct version runs at runtime based on the actual object type.

Expected output:
```
Drawing Circle
Drawing Rectangle
```

---

Good luck — drop files here when done.
