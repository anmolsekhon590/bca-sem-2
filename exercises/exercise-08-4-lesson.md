# Lesson — Delegating Constructors (from exercise-08-4)

---

## The mistake — calling constructor in the body

You wrote:
```cpp
Circle(float r) {
    Circle(r, "red");   // WRONG — creates a temporary object, thrown away immediately
}
```

This compiles but does nothing useful. `radius` and `color` stay uninitialized.

---

## Correct syntax — delegate via initializer list

```cpp
Circle(float r) : Circle(r, "red") {}   // correct
```

The `: Circle(r, "red")` part is in the initializer list, same place you'd put member initialization. It tells C++: "before running this constructor's body, run that other constructor first."

---

## Rule

> Delegation must happen in the **initializer list**, never in the constructor body.

---

## Also — test delegation in main

If you call `Circle c2(3, "red")` in main, you're bypassing the delegating constructor entirely and calling the full one directly. To actually test delegation, call the one-arg version:

```cpp
Circle c2(3);   // triggers Circle(float r) which delegates to Circle(float r, string c)
```

---

## When to use delegating constructors

When multiple constructors share the same setup logic. Instead of repeating code, let one constructor call another:

```cpp
Circle(float r, string c) {
    radius = r;
    color = c;
}
Circle(float r) : Circle(r, "red") {}      // default color
Circle() : Circle(1, "black") {}           // default radius and color
```

All three delegate setup to the full constructor.
