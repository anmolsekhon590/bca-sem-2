# Exercise 05 — More on Functions

---

## 1. Inline Function
Write an inline function `square(int x)` that returns `x * x`. Call it for values 3, 5, and 7 and print each result.

Expected output:
```
square(3) = 9
square(5) = 25
square(7) = 49
```

---

## 2. Function Overloading
Write three overloaded functions all named `area`:
- `area(float side)` — area of a square
- `area(float length, float width)` — area of a rectangle
- `area(float base, float height, bool triangle)` — area of a triangle (`0.5 * base * height`)

Expected output:
```
Square area:    25
Rectangle area: 30
Triangle area:  10
```

---

## 3. Friend Function
Create a class `Box` with a private `float volume`. Write a friend function `printVolume(Box b)` that prints the volume. Set volume through a public `setVolume(float v)`.

Expected output:
```
Volume: 120
```

---

## 4. Friend Function Accessing Two Classes
Create two classes `Celsius` and `Fahrenheit`, each with a private `float temp`. Write a friend function `convert(Celsius c)` that returns a `Fahrenheit` object with the converted value. Print the result.

Expected output:
```
100°C = 212°F
```

---

## 5. Overloading with Different Types
Write overloaded functions `display(int x)`, `display(float x)`, and `display(string x)` that each print the value with its type label.

Expected output:
```
int:    42
float:  3.14
string: hello
```

---

Good luck — drop files here when done.
