# Lesson — Static Members (from exercise-06-1)

---

## The mistake — missing static member definition

Declaring a static member inside the class is not enough:

```cpp
class Student {
    static int count;   // declaration only
};
```

You must also **define** it outside the class:

```cpp
int Student::count = 0;   // definition — goes after the class, before main
```

Without this line the linker throws: `undefined reference to Student::count`

---

## Why is this needed?

A regular (non-static) member lives inside each object — when you create an object, memory is allocated for it automatically.

A static member is **shared across all objects** — it doesn't belong to any single object, so it needs its own memory defined separately. The definition is what actually allocates that memory.

---

## Quick rules for static members

| | Regular member | Static member |
|---|---|---|
| Lives in | Each object | Once, globally |
| Declared | Inside class | Inside class |
| Defined | Automatic | Must define outside class |
| Accessed via | `object.member` | `ClassName::member` or `object.member` |
| Can use in static function? | No | Yes |

---

## Static member functions

- Declared with `static` inside the class
- Can only access **static** data members (no `this` pointer)
- Called without an object: `Student::getCount()` or via an object `s1.getCount()`

```cpp
static int getCount() {
    return count;   // count must also be static
}
```
