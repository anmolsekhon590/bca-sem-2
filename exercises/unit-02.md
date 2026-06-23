# Unit 2 — Basics of C++

## Tokens

A **token** is the smallest meaningful unit in a C++ program. There are 5 types:

### 1. Keywords
Reserved words the compiler gives special meaning to. Cannot be used as variable names.
```
int  float  char  bool  double  void
if   else   for   while  do  switch  case  break  continue  return
class  public  private  protected  new  delete  static  const
```

### 2. Identifiers
Names you give to variables, functions, classes, etc.

Rules:
- Must start with a letter or `_` (not a digit)
- Can contain letters, digits, and `_`
- Case-sensitive (`age` and `Age` are different)
- Cannot be a keyword

```cpp
int age;        // valid
int _count;     // valid
int 2fast;      // invalid — starts with digit
int class;      // invalid — keyword
```

### 3. Constants
Fixed values that don't change. Declared with `const`.

Types: integer (`42`), float (`3.14`), character (`'A'`), string (`"hello"`), boolean (`true`/`false`).

```cpp
const float pi = 3.14;
const int MAX = 100;
```

### 4. Strings
A sequence of characters in double quotes: `"John Doe"`. String literals vs the `string` data type:

```cpp
string name = "John";   // string data type (from <string>)
cout << "hello";        // string literal
```

### 5. Operators
Symbols that perform operations: `+`, `-`, `*`, `/`, `=`, `==`, `<<`, etc. Covered in depth in Unit 3.

---

## Data Types

| Type | Size | Example |
|------|------|---------|
| `int` | 4 bytes | `int age = 25;` |
| `float` | 4 bytes | `float pi = 3.14;` |
| `double` | 8 bytes | `double netWorth = 1e5;` |
| `char` | 1 byte | `char grade = 'A';` |
| `bool` | 1 byte | `bool isPass = true;` |
| `string` | varies | `string name = "John";` |

## Reference Variables

An alias for an existing variable. Any change to the reference also changes the original.

```cpp
int x = 10;
int &r = x;   // r is an alias for x
r = 20;       // x is now 20
```

Unlike pointers: cannot be null, cannot be reassigned to refer to another variable, no dereferencing needed.
