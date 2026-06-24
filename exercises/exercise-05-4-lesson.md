# Lesson — Friend Functions (from exercise-05-4)

---

## What the exercise built

Two classes (`Celsius`, `Fahrenheit`) where a standalone `convert` function accesses private members of both.

---

## Mistake 1 — `friend` keyword on standalone functions

You wrote:
```cpp
friend Fahrenheit convert(Celsius c) {   // WRONG
    ...
}
```

`friend` only belongs **inside a class declaration**. Outside, it's just a regular function:
```cpp
Fahrenheit convert(Celsius c) {          // correct
    ...
}
```

---

## Mistake 2 — Friend declarations in the wrong class

This was the main one.

A `friend` declaration in a class grants that function access to **that class's** private members. So the rule is:

> **Put the friend declaration in the class whose private data the function reads.**

You had:
```cpp
class Celsius {
    friend Celsius convert(Fahrenheit f);   // WRONG — this function reads Fahrenheit::temp
};

class Fahrenheit {
    friend Fahrenheit convert(Celsius c);   // WRONG — this function reads Celsius::temp
};
```

Correct:
```cpp
class Celsius {
    friend Fahrenheit convert(Celsius c);   // reads c.temp → friend in Celsius
};

class Fahrenheit {
    friend Celsius convert(Fahrenheit f);   // reads f.temp → friend in Fahrenheit
};
```

---

## Mistake 3 — Accessing private members directly from `main`

You wrote `cout << c.temp` in `main`. Private means **only the class itself and its friends** can access it — `main` is neither. Fix: add a `display()` method to the class.

---

## Mistake 4 — Default-constructing an object that has no default constructor

You wrote:
```cpp
Fahrenheit f;           // WRONG — no default constructor exists
f = convert(c);
```

Once you define any constructor (like `Fahrenheit(float t)`), C++ removes the default no-argument constructor. Fix: initialize directly:
```cpp
Fahrenheit f = convert(c);
```

---

## Forward declaration

When two classes reference each other, declare one before the other:
```cpp
class Fahrenheit;   // forward declaration — tells compiler "this name exists"

class Celsius {
    friend Fahrenheit convert(Celsius c);   // Fahrenheit used here before it's fully defined
};

class Fahrenheit {
    ...
};
```

---

## Quick reference

| Rule | Why |
|------|-----|
| `friend` only inside class body | It's a class-level permission, not a function modifier |
| Friend declaration goes in the class being accessed | That's what grants the permission |
| No `friend` on the function definition | The definition is just a normal function |
| Can't use private members in `main` | `main` has no special relationship with any class |
