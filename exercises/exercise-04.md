# Exercise 04 — More on Classes & Functions

---

## 1. Private Helper Function
Create a `Temperature` class with a private `float celsius` and a private helper `toCelsius(float f)` that converts fahrenheit to celsius. Add a public `setFromFahrenheit(float f)` that uses the helper, and a `display()` that prints the celsius value.

Expected output:
```
Enter temp in Fahrenheit: 98.6
Celsius: 37
```

---

## 2. Array as Class Member
Create a `Grades` class with a private `int marks[5]` and an `int count`. Add:
- `void addMark(int m)` — adds a mark to the array
- `float average()` — returns the average
- `void display()` — prints all marks

Expected output:
```
Marks: 80 90 75 85 95
Average: 85
```

---

## 3. Call by Value vs Call by Reference
Write two functions:
- `doubleVal(int x)` — doubles by value, original unchanged
- `doubleRef(int &x)` — doubles by reference, original changed

Expected output:
```
Original: 5
After doubleVal: 5
After doubleRef: 10
```

---

## 4. Default Arguments
Write a function `bill(float price, int qty, float discount = 0)` that calculates `price * qty - discount`. Call it three ways — with discount, without, and with qty defaulting too if you add a second default.

Expected output:
```
bill(100, 3):        300
bill(100, 3, 50):    250
```

---

## 5. Object as Function Argument
Create a `Rectangle` class with `float length` and `float width` (both public). Write a standalone function `printArea(Rectangle r)` that prints the area. Call it by value and by reference — observe the difference (no visible output difference, just understand what's being copied).

Expected output:
```
Area: 50
```

---

Good luck — drop files here when done.
