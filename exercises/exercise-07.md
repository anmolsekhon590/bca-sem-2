# Exercise 07 — Constructors & Destructors

---

## 1. Default Constructor
Create a `Clock` class with `int hours`, `int minutes`, `int seconds`. Write a default constructor that sets all to 0 and a `display()` that prints the time.

Expected output:
```
Time: 0:0:0
```

---

## 2. Parameterized Constructor
Extend the `Clock` class from above (or create a new one) with a parameterized constructor `Clock(int h, int m, int s)`. Create two objects — one with the default constructor, one with values.

Expected output:
```
Time: 0:0:0
Time: 10:30:45
```

---

## 3. Constructor Overloading
Create a `Box` class with `float length`, `float width`, `float height`. Write:
- A default constructor that sets all to 1
- A parameterized constructor that takes all three values
- A `volume()` function that returns `length * width * height`

Expected output:
```
Default box volume: 1
Custom box volume:  60
```

---

## 4. Copy Constructor
Create a `Point` class with `int x`, `int y`. Write a copy constructor `Point(Point &p)` that copies values from another `Point`. Show that modifying the copy doesn't affect the original.

Expected output:
```
Original: 3, 4
Copy:     3, 4
Modified copy: 10, 4
Original still: 3, 4
```

---

## 5. Destructor
Create a `Resource` class with a constructor that prints `"Resource acquired"` and a destructor (`~Resource()`) that prints `"Resource released"`. Create an object in `main` and observe both messages.

Expected output:
```
Resource acquired
Resource released
```

---

Good luck — drop files here when done.
