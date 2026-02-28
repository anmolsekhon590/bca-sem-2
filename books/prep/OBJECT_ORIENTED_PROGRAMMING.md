# Object Oriented Programming - Comprehensive Exam Prep

## Overall Book Summary

This book covers Object-Oriented Programming using C++ from fundamentals to advanced topics. It begins with core OOP principles (encapsulation, inheritance, polymorphism, abstraction), then builds up C++ syntax (data types, operators, control structures, pointers, structures), moves into classes and objects, covers functions in depth (inline, friend, static, overloaded), explains constructors and destructors, and concludes with inheritance and file handling. The central theme is modeling real-world entities as objects that bundle data (attributes) and behavior (member functions), with controlled access and code reuse through inheritance.

---

## Unit 01: Principles of OOP

### Key Topics
- Why OOP? Limitations of procedural programming
- Core OOP concepts: objects, classes, data abstraction, encapsulation, inheritance, polymorphism, dynamic binding, message passing
- Procedural vs Object-Oriented paradigm

### Important Definitions and Concepts

- **Object**: A basic runtime entity that represents a real-world thing. Has state (data) and behavior (functions).
- **Class**: A user-defined data type (blueprint) that defines attributes and behaviors. Objects are instances of a class.
- **Data Abstraction**: Hiding implementation details and exposing only essential features to the user.
- **Encapsulation**: Wrapping data and functions together in a single unit (class); data is hidden from outside access.
- **Inheritance**: A mechanism by which one class (derived) acquires properties and behaviors of another class (base). Supports code reusability.
- **Polymorphism**: The ability to take more than one form. Same operation behaves differently in different contexts (e.g., `+` adds numbers but concatenates strings).
- **Dynamic Binding**: The code associated with a function call is determined at runtime, not compile time. Linked with virtual functions.
- **Message Passing**: Objects communicate by calling each other's member functions (sending messages). Consists of object name, function name, and parameters.
- **Procedural Programming**: Focuses on functions/procedures; data and functions are separate. Vulnerable to unintentional modification.
- **OOP Advantages**: Modularity, reusability, maintainability, data security through encapsulation.

### Key C++ Syntax

```cpp
class ClassName {
private:
    int data;       // hidden data
public:
    void setData(int d) { data = d; }   // behavior
    int getData() { return data; }
};

int main() {
    ClassName obj;          // object creation
    obj.setData(10);        // message passing
}
```

### Exam Questions

**Q1. What are the main principles of OOP?**
Encapsulation, Abstraction, Inheritance, Polymorphism, Dynamic Binding, and Message Passing.

**Q2. What is the difference between a class and an object?**
A class is a blueprint or template (user-defined data type). An object is an instance of a class — it occupies memory and has actual values.

**Q3. What is encapsulation?**
Encapsulation is the binding of data and functions into a single unit (class), keeping the data hidden from outside access. Achieved using private access specifier.

**Q4. What is polymorphism? Give an example.**
Polymorphism means "many forms." The `+` operator is polymorphic: it performs addition on integers but string concatenation on strings.

**Q5. What is dynamic binding?**
Dynamic binding means the code associated with a function call is linked at runtime. It is implemented using virtual functions in C++.

**Q6. How does OOP differ from procedural programming?**
In procedural programming, focus is on functions and data is global/freely accessible. In OOP, data is encapsulated inside objects and accessed only through member functions, providing security and modularity.

**Q7. What is message passing in OOP?**
Objects communicate by invoking each other's member functions. A message consists of: object name, function (method) name, and parameters.

---

## Unit 02: Basics of C++

### Key Topics
- C vs C++ key differences
- C++ tokens: keywords, identifiers, constants, strings, operators
- Data types in C++
- Reference variables

### Important Definitions and Concepts

- **Token**: The smallest individual unit in a program. Types: keywords, identifiers, constants, strings, operators.
- **Keyword**: Reserved words with predefined meanings (e.g., `int`, `class`, `return`, `if`). Cannot be used as identifiers.
- **Identifier**: User-defined names for variables, functions, classes, etc. Rules: starts with letter or underscore, no spaces, no special characters (except `_`).
- **Constant**: A fixed value that does not change during execution. Can be integer, float, character, or string.
- **Reference Variable**: An alias for an existing variable. Declared with `&`. Any change to the reference also changes the original variable.
- **Data Types**: Primitive (int, float, char, bool, double), Derived (array, pointer, function), User-defined (struct, class, enum).
- **C++ enhancements over C**: Classes, function overloading, references, `bool` type, `new`/`delete` operators, `cin`/`cout` I/O.

### Key C++ Syntax

```cpp
// Reference variable
int x = 10;
int &r = x;    // r is an alias for x
r = 20;        // x is now 20

// Constants
const float PI = 3.14159;

// Data types
int age = 25;
float salary = 50000.5;
char grade = 'A';
bool isPass = true;
```

### Exam Questions

**Q1. What is a token in C++? List the types.**
A token is the smallest unit in a C++ program. Types: keywords, identifiers, constants, strings, and operators.

**Q2. What is a reference variable? How is it different from a pointer?**
A reference variable is an alias for another variable (`int &r = x`). Unlike a pointer, it cannot be null, cannot be reassigned to refer to another variable, and does not need dereferencing.

**Q3. What are keywords? Give examples.**
Keywords are reserved words with predefined meanings. Examples: `int`, `float`, `class`, `if`, `return`, `while`, `public`, `private`.

**Q4. What are the rules for naming identifiers?**
Must start with a letter (a-z, A-Z) or underscore (_), followed by letters, digits, or underscores. Cannot use keywords. Case-sensitive.

**Q5. List the primitive data types in C++.**
`int`, `float`, `double`, `char`, `bool`, `void`, `wchar_t`. Also `short`, `long`, `unsigned` variants.

**Q6. What is the difference between C and C++?**
C is procedural; C++ supports OOP. C++ adds classes, objects, function overloading, references, `bool`, `new`/`delete`, namespaces, and exception handling.

---

## Unit 03: Operators and Type Casting

### Key Topics
- All operator categories in C++
- Scope resolution operator (`::`)
- Member dereferencing operators
- Type conversion: implicit and explicit
- Conversion types: basic-to-class, class-to-basic, class-to-class

### Important Definitions and Concepts

- **Arithmetic Operators**: `+`, `-`, `*`, `/`, `%`
- **Relational Operators**: `==`, `!=`, `<`, `>`, `<=`, `>=` — return true/false
- **Logical Operators**: `&&` (AND), `||` (OR), `!` (NOT)
- **Bitwise Operators**: `&`, `|`, `^`, `~`, `<<`, `>>`
- **Assignment Operators**: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- **Scope Resolution Operator (`::`)**: Used to define member functions outside a class, or to access global variables when hidden by a local variable.
- **Implicit Conversion**: Automatically performed by the compiler when converting between compatible types (e.g., `int` to `float`).
- **Explicit Conversion (Type Casting)**: Programmer-forced conversion. Syntax: `(type) expression` or `type(expression)`.
- **Basic-to-Class Conversion**: Achieved using a constructor that accepts the basic type as argument.
- **Class-to-Basic Conversion**: Achieved using a casting operator function: `operator typename()`.
- **Class-to-Class Conversion**: Achieved using either a constructor in the destination class or a casting operator in the source class.

### Key C++ Syntax

```cpp
// Scope resolution operator
class Demo {
    int x;
public:
    void show();    // declaration
};
void Demo::show() { cout << x; }    // definition outside class

// Explicit type casting
int a = 10, b = 3;
float result = (float)a / b;    // explicit cast

// Casting operator function (class-to-basic)
class Fahrenheit {
    float f;
public:
    Fahrenheit(float temp) : f(temp) {}
    operator float() { return (f - 32) * 5 / 9; }  // cast to float (Celsius)
};
```

### Exam Questions

**Q1. What is the scope resolution operator? Give an example.**
`::` is used to define class member functions outside the class body, or to access global variables shadowed by local ones. Example: `void Demo::show() { ... }`

**Q2. Differentiate between implicit and explicit type conversion.**
Implicit conversion is automatic by the compiler (e.g., `int` to `float`). Explicit conversion is forced by the programmer using a cast operator: `(float)x`.

**Q3. How is basic-to-class type conversion achieved?**
By defining a constructor in the class that accepts the basic data type as an argument.

**Q4. How is class-to-basic type conversion achieved?**
By defining a casting operator function in the class: `operator typename() { return value; }`. It has no return type specified in the signature.

**Q5. What are bitwise operators? Give examples.**
Bitwise operators operate on individual bits: `&` (AND), `|` (OR), `^` (XOR), `~` (complement), `<<` (left shift), `>>` (right shift).

**Q6. What is the ternary operator? Give syntax.**
`condition ? expression_if_true : expression_if_false`. Example: `int max = (a > b) ? a : b;`

---

## Unit 04: Control Structures

### Key Topics
- Selection/Decision structures: if, if-else, nested if, switch
- Iteration/Loop structures: for, while, do-while
- Jump statements: goto, break, continue

### Important Definitions and Concepts

- **if Statement**: Executes a block only if the condition is true.
- **if-else Statement**: Executes one block if condition is true, another if false.
- **Nested if**: An if or if-else inside another if or else block.
- **switch Statement**: Multi-way branch based on the value of an expression. Uses `case` and `default` labels; `break` is needed to prevent fall-through.
- **for Loop**: Entry-controlled loop. Best when number of iterations is known. Syntax: `for(init; condition; update)`
- **while Loop**: Entry-controlled loop. Condition is tested before the loop body executes.
- **do-while Loop**: Exit-controlled loop. Loop body executes at least once; condition tested after.
- **break**: Immediately exits the nearest enclosing loop or switch.
- **continue**: Skips the rest of the current iteration and proceeds to the next.
- **goto**: Unconditional jump to a labeled statement. Generally discouraged.

### Key C++ Syntax

```cpp
// if-else
if (x > 0) cout << "Positive";
else if (x < 0) cout << "Negative";
else cout << "Zero";

// switch
switch (grade) {
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good"; break;
    default:  cout << "Average";
}

// for loop
for (int i = 0; i < 10; i++) cout << i;

// while loop
while (n > 0) { cout << n; n--; }

// do-while loop
do { cin >> x; } while (x != 0);
```

### Exam Questions

**Q1. What is the difference between while and do-while loops?**
`while` is entry-controlled (condition checked before loop body); it may execute 0 times. `do-while` is exit-controlled (body executes at least once; condition checked after).

**Q2. When is a switch statement preferred over if-else?**
When checking a single variable against multiple discrete constant values. It is more readable and efficient than multiple if-else chains.

**Q3. What is the purpose of the break statement?**
`break` immediately exits the nearest enclosing loop or `switch` statement, transferring control to the statement after the loop/switch.

**Q4. What does the continue statement do?**
`continue` skips the remaining code in the current loop iteration and proceeds directly to the next iteration.

**Q5. What is the difference between entry-controlled and exit-controlled loops?**
Entry-controlled loops (`for`, `while`) check the condition before executing the body — may execute 0 times. Exit-controlled loops (`do-while`) check the condition after the body — always execute at least once.

**Q6. What happens if break is missing in a switch case?**
Execution "falls through" to the next case, executing all subsequent case blocks until a `break` or the end of the switch is reached.

---

## Unit 05: Pointers and Structures

### Key Topics
- The `main()` function
- Function prototyping (declaration, definition, call)
- Pointer declaration and usage
- C structures (struct) and their limitations

### Important Definitions and Concepts

- **Pointer**: A variable that stores the memory address of another variable. Declared as `data_type *ptr_name;`
- **Address Operator (`&`)**: Returns the memory address of a variable.
- **Dereference Operator (`*`)**: Accesses the value at the address stored in a pointer.
- **Pointer Arithmetic**: Pointers can be incremented/decremented to traverse arrays. `ptr++` moves to the next element of the pointed-to type.
- **Function Prototype**: A declaration that tells the compiler a function's name, return type, and parameter types before its actual definition.
- **struct (C-style)**: A user-defined data type that groups related variables of different types. Limitation: no data hiding, no member functions, no access modifiers, no constructors/destructors.
- **Limitations of C Structures**: Cannot have member functions, no access control (all members are public), no constructor/destructor, no operator overloading — these limitations led to the creation of C++ classes.

### Key C++ Syntax

```cpp
// Pointer declaration and use
int x = 50;
int *ptr = &x;       // ptr holds address of x
cout << *ptr;        // prints 50 (dereferencing)
*ptr = 100;          // x is now 100

// Pointer arithmetic
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;
for (int i = 0; i < 5; i++) {
    cout << *p << " ";
    p++;
}

// C struct
struct Student {
    int id;
    char name[50];
    float gpa;
};
Student s1;
s1.id = 1;
```

### Exam Questions

**Q1. What is a pointer? How is it declared?**
A pointer is a variable that holds the memory address of another variable. Declaration: `data_type *ptr_name;` e.g., `int *ptr;`

**Q2. What is the difference between `&` and `*` operators in the context of pointers?**
`&` (address-of operator) returns the address of a variable. `*` (dereference operator) accesses the value at the address stored in a pointer.

**Q3. What are the limitations of C structures?**
C structures: cannot have member functions, no access specifiers (all members public), no constructors/destructors, no operator overloading, no data hiding.

**Q4. What is a function prototype? Why is it needed?**
A function prototype is a declaration that informs the compiler about a function's name, return type, and parameter types before its full definition. It enables the compiler to catch type mismatches in function calls.

**Q5. How does pointer arithmetic work?**
When a pointer is incremented (`ptr++`), it moves to the next memory location of its base type (e.g., for `int*`, it advances by `sizeof(int)` = 4 bytes).

**Q6. What is the NULL pointer?**
A NULL pointer is a pointer that does not point to any valid memory location. It is initialized as `int *ptr = NULL;` or `int *ptr = 0;`. Dereferencing a NULL pointer causes undefined behavior.

---

## Unit 06: Classes and Objects

### Key Topics
- Specifying a class
- Defining member functions inside and outside the class
- Creating and using objects
- Access specifiers: public, private, protected
- Passing objects to functions, static data members

### Important Definitions and Concepts

- **Class**: A user-defined data type that combines data (attributes) and functions (behaviors). Defined using `class` keyword.
- **Object**: An instance of a class. Multiple objects can be created from one class.
- **Member Function**: A function defined inside a class. Operates on the data members of the class.
- **Access Specifiers**:
  - `private`: Members accessible only within the class. Default for class members.
  - `public`: Members accessible from anywhere.
  - `protected`: Members accessible within the class and in derived classes.
- **Static Data Member**: A data member shared by all objects of the class. Only one copy exists regardless of how many objects are created. Initialized outside the class.
- **Scope Resolution Operator (`::`)**: Used to define member functions outside the class body.

### Key C++ Syntax

```cpp
class Rectangle {
private:
    float length, width;   // private data
public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
    float area();          // declaration only
};

// Definition outside the class
float Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r1;          // object creation
    r1.setDimensions(5.0, 3.0);
    cout << r1.area();     // 15
}

// Static data member
class Counter {
    static int count;
public:
    Counter() { count++; }
    static int getCount() { return count; }
};
int Counter::count = 0;   // initialization outside class
```

### Exam Questions

**Q1. What is a class? How is it different from a structure?**
A class is a user-defined data type that bundles data and functions with access control. Unlike a C struct (all public by default), a class defaults to private access and supports constructors, destructors, inheritance, and operator overloading.

**Q2. What are the three access specifiers in C++? Explain each.**
`private`: accessible only within the class. `public`: accessible from anywhere. `protected`: accessible within the class and its derived classes.

**Q3. How do you define a member function outside a class?**
Using the scope resolution operator: `return_type ClassName::functionName(parameters) { ... }`

**Q4. What is a static data member? How is it initialized?**
A static data member is shared by all objects of the class — only one copy exists. It is declared inside the class with `static` and initialized outside: `int ClassName::memberName = value;`

**Q5. How can objects be passed to functions?**
Objects can be passed by value (a copy is made) or by reference (using `&`, no copy). Passing by reference is more efficient for large objects.

**Q6. What is the default access specifier for a class?**
`private`. All members of a class are private by default unless specified otherwise.

---

## Unit 07: More on Classes and Objects

### Key Topics
- Member function syntax in detail
- Nested member functions
- Private member functions
- Arrays within a class
- Dynamic memory allocation with new and delete

### Important Definitions and Concepts

- **Nested Member Functions**: A member function that calls another member function of the same class within its body.
- **Private Member Functions**: Member functions declared in the `private` section. Can only be called by other member functions of the same class (helper/utility functions).
- **Arrays within a Class**: Arrays can be declared as data members (private, public, or protected). Accessed via member functions.
- **`new` Operator**: Allocates memory on the heap at runtime. Returns a pointer to the allocated memory.
- **`delete` Operator**: Deallocates memory previously allocated with `new` to prevent memory leaks.
- **Dynamic Memory Allocation**: Allocating memory at runtime rather than compile time. Provides flexibility in managing memory.

### Key C++ Syntax

```cpp
// Nested member functions
class Demo {
    int x;
    void helper() { cout << x; }   // private helper
public:
    void show() { helper(); }       // calls private function
};

// Arrays within a class
class Student {
    int marks[5];   // array as data member
    int n;
public:
    void getMarks(int m[], int size) {
        n = size;
        for (int i = 0; i < n; i++) marks[i] = m[i];
    }
};

// Dynamic memory allocation
int *ptr = new int;         // allocate single int
*ptr = 42;
delete ptr;                 // free memory

int *arr = new int[10];     // allocate array
delete[] arr;               // free array
```

### Exam Questions

**Q1. What is dynamic memory allocation? What operators are used?**
Dynamic memory allocation is allocating memory at runtime using `new` (allocates from heap) and freeing it with `delete`. This allows flexible memory management beyond fixed compile-time sizes.

**Q2. What is the difference between new/delete and malloc/free?**
`new`/`delete` are C++ operators that also call constructors/destructors. `malloc()`/`free()` are C functions that only allocate/deallocate raw memory without calling constructors/destructors.

**Q3. What are nested member functions?**
When a member function of a class calls another member function of the same class, it is called a nested member function call. The inner function can be private (utility function).

**Q4. What are private member functions? Why are they used?**
Private member functions are helper functions declared in the `private` section, accessible only by other member functions of the same class. Used for internal logic that should not be exposed to users.

**Q5. How is an array declared as a class data member?**
Declared just like a normal data member: `int marks[10];` inside the class. Accessed and modified through public member functions.

**Q6. What happens if you forget to use delete after new?**
A memory leak occurs — the allocated heap memory is never freed, gradually consuming available memory, potentially causing program crashes.

---

## Unit 08: Handling Functions

### Key Topics
- Types of functions (library vs user-defined)
- Function activities: declaration, definition, call
- Call by value vs call by reference
- Passing objects to functions
- Default arguments

### Important Definitions and Concepts

- **Library Functions**: Pre-written functions provided by C++ standard library (e.g., `sqrt()`, `strlen()`, `cout`).
- **User-Defined Functions**: Functions written by the programmer.
- **Function Declaration**: Tells compiler the function's name, return type, and parameter types. Ends with semicolon.
- **Function Definition**: Contains the actual body/implementation of the function.
- **Function Call**: The statement that invokes (executes) the function.
- **Call by Value**: A copy of the argument is passed. Changes inside the function do NOT affect the original variable.
- **Call by Reference**: The address of the argument is passed (using `&`). Changes inside the function DO affect the original variable.
- **Default Arguments**: Parameters with pre-assigned values in the function declaration. Used when the caller does not supply a value. Must be rightmost parameters.

### Key C++ Syntax

```cpp
// Call by value
void increment(int x) { x++; }   // original unchanged

// Call by reference
void increment(int &x) { x++; }  // original changed

// Default arguments
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}
sum(10, 20);        // c=0, d=0 (defaults used)
sum(10, 20, 5);     // d=0 (default used)
sum(10, 20, 5, 3);  // no defaults used

// Passing object by reference
void display(Rectangle &r) {
    cout << r.area();
}
```

### Exam Questions

**Q1. What is the difference between call by value and call by reference?**
Call by value passes a copy of the argument; the original is unaffected. Call by reference passes the memory address (using `&`); changes inside the function affect the original variable.

**Q2. What are default arguments? Where must they be placed?**
Default arguments are pre-assigned values in the function declaration, used when the caller does not supply them. They must be the rightmost (trailing) parameters in the parameter list.

**Q3. What is the difference between function declaration and function definition?**
Declaration (prototype) only specifies the function signature (name, return type, parameters) ending with `;`. Definition provides the actual implementation body `{ ... }`.

**Q4. Why is call by reference preferred for passing objects?**
Passing objects by value creates a copy (expensive for large objects). Pass by reference avoids copying, improving performance. Use `const &` to prevent modification: `void show(const Rectangle &r)`.

**Q5. Can default arguments be overridden?**
Yes. If the caller supplies a value for a default argument parameter, the supplied value overrides the default. Default arguments are only used when no value is provided.

**Q6. What is a library function? Give examples.**
Library functions are pre-written, compiled functions available in C++ standard libraries. Examples: `sqrt()` (math.h), `strlen()` (string.h), `cin`/`cout` (iostream).

---

## Unit 09: More on Functions

### Key Topics
- Inline functions
- Friend functions
- Static data members and functions (intro)
- Polymorphism (intro)
- Function overloading

### Important Definitions and Concepts

- **Inline Function**: A function prefixed with `inline`. The compiler replaces the function call with the function's actual code at each call site. Eliminates function call overhead. Best for small, simple functions.
- **Inline Pros**: Reduces function call overhead, can be faster for small functions.
- **Inline Cons**: Increases code size (code bloat); not guaranteed to be inlined by compiler.
- **Friend Function**: A non-member function that is granted access to the private and protected members of a class. Declared inside the class using `friend` keyword. Defined outside without the class name.
- **Friend Class**: An entire class can be a friend of another class.
- **Function Overloading**: Defining multiple functions with the same name but different parameter lists (different number or type of parameters). The compiler selects the correct version based on the call arguments. Cannot differ only by return type.

### Key C++ Syntax

```cpp
// Inline function
inline int square(int x) { return x * x; }

// Friend function
class Box {
    float volume;
public:
    Box(float v) : volume(v) {}
    friend void printVolume(Box b);   // declaration inside class
};
void printVolume(Box b) {             // definition outside, no Box::
    cout << b.volume;                 // can access private member
}

// Function overloading
int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }
```

### Exam Questions

**Q1. What is an inline function? When should it be used?**
An inline function uses the `inline` keyword; the compiler replaces the call with the function body at each call site, eliminating call overhead. Best for small, frequently-called functions (1-3 lines). Avoid for large functions as it causes code bloat.

**Q2. What is a friend function? How is it declared?**
A friend function is a non-member function with access to a class's private and protected data. Declared inside the class with `friend`: `friend void funcName(ClassName obj);`. Defined outside without `ClassName::`.

**Q3. What are the rules for function overloading?**
Overloaded functions must have the same name but differ in: (1) number of parameters, or (2) type of parameters, or (3) both. They cannot differ only in return type.

**Q4. Can friend functions access private members?**
Yes. That is the purpose of friend functions — they are granted special access to private and protected members of the class they are declared as friend in.

**Q5. What is the difference between a friend function and a member function?**
A member function is called on an object (`obj.func()`) and has automatic access to all class members. A friend function is called like a regular function (`func(obj)`) and is explicitly granted access to private members.

**Q6. What is the limitation of function overloading regarding return types?**
Two functions that differ only in return type are NOT considered overloaded and will cause a compilation error. The parameter list must differ.

---

## Unit 10: Static Members and Polymorphism

### Key Topics
- Static data members (detailed)
- Static member functions
- Polymorphism concept
- Types: compile-time vs runtime polymorphism
- Function overloading (polymorphism)
- Polymorphism vs Inheritance comparison

### Important Definitions and Concepts

- **Static Data Member**: Shared by all objects of the class. Only one copy exists. Initialized to zero when the first object is created. Visible only within the class, but its lifetime is the entire program.
- **Static Member Function**: Can access only static members of the class. Called using the class name (not an object): `ClassName::functionName()`. Has no `this` pointer.
- **Polymorphism**: Ability to take more than one form. An operation may behave differently depending on the types of data used.
- **Compile-Time Polymorphism (Early Binding)**: Determined at compile time. Achieved through function overloading and operator overloading.
- **Runtime Polymorphism (Late Binding)**: Determined at runtime. Achieved through virtual functions and function overriding.
- **Inheritance vs Polymorphism**: Inheritance is about reusing properties from a base class. Polymorphism is about one interface, multiple implementations.

### Key C++ Syntax

```cpp
// Static data member
class Demo {
public:
    static int n;
};
int Demo::n = 100;   // initialized outside class
int main() {
    cout << Demo::n;  // accessed via class name
}

// Static member function
class Counter {
    static int count;
public:
    static void show() {     // static function
        cout << count;
    }
};
int Counter::count = 0;
int main() {
    Counter::show();         // called via class name, no object needed
}
```

### Exam Questions

**Q1. What are the characteristics of a static data member?**
(1) Initialized to zero when the first object is created. (2) Only one copy shared by all objects. (3) Visible only within the class but has program-lifetime. (4) Must be initialized outside the class definition.

**Q2. How is a static member function different from a regular member function?**
A static member function can only access static data members (no `this` pointer). It is called using the class name: `ClassName::functionName()` without needing an object.

**Q3. What is the difference between compile-time and runtime polymorphism?**
Compile-time (static): resolved at compile time via function/operator overloading. Runtime (dynamic): resolved at execution time via virtual functions and overriding.

**Q4. Can a static member function be virtual?**
No. Static member functions cannot be virtual because virtual functions require a `this` pointer (to determine which class's version to call), and static functions have no `this` pointer.

**Q5. What is the correct syntax for declaring a static data member?**
`static dataType memberName;` inside the class, then `dataType ClassName::memberName = value;` outside to initialize.

**Q6. How does polymorphism relate to inheritance?**
Inheritance allows a derived class to reuse base class code. Polymorphism allows the same function name to behave differently for different classes in an inheritance hierarchy (especially via virtual functions).

---

## Unit 11: Constructors and Destructors

### Key Topics
- What is a constructor and its rules
- Types of constructors: default, parameterized, copy, dynamic
- Constructor overloading
- What is a destructor and its rules

### Important Definitions and Concepts

- **Constructor**: A special member function with the same name as the class. Called automatically when an object is created. Has no return type (not even void). Used to initialize data members.
- **Default Constructor**: Constructor with no parameters (or all parameters have defaults). Called when an object is created without arguments.
- **Parameterized Constructor**: Constructor that accepts arguments. Allows initializing objects with specific values.
- **Copy Constructor**: Constructor that creates a new object as a copy of an existing object. Syntax: `ClassName(const ClassName &obj)`. Called during: initialization from existing object, passing by value, returning by value.
- **Dynamic Constructor**: Constructor that uses `new` to allocate memory dynamically during object creation.
- **Constructor Overloading**: Multiple constructors in the same class with different parameter lists.
- **Destructor**: A special member function with the same name as the class, preceded by `~`. Called automatically when an object goes out of scope or is deleted. Has no parameters, no return type. Used to release resources. Cannot be overloaded.

### Key C++ Syntax

```cpp
class Sample {
    int x, y;
public:
    Sample() { x = 0; y = 0; }              // default constructor
    Sample(int a, int b) { x = a; y = b; }  // parameterized constructor
    Sample(const Sample &s) { x = s.x; y = s.y; }  // copy constructor
    ~Sample() { cout << "Destructor called"; }       // destructor
};

int main() {
    Sample s1;           // calls default constructor
    Sample s2(5, 10);    // calls parameterized constructor
    Sample s3(s2);       // calls copy constructor
}   // destructors called automatically here (reverse order)
```

### Exam Questions

**Q1. What is a constructor? What are its characteristics?**
A constructor is a member function with the same name as its class. Characteristics: (1) same name as class, (2) no return type, (3) called automatically when object is created, (4) can be overloaded, (5) cannot be inherited.

**Q2. What is the difference between a default and parameterized constructor?**
Default constructor takes no arguments and initializes to default values. Parameterized constructor takes arguments allowing custom initialization.

**Q3. What is a copy constructor? When is it called?**
A copy constructor creates a new object as a copy of an existing one. Syntax: `ClassName(const ClassName &obj)`. Called when: (1) initializing one object from another, (2) passing object by value to a function, (3) returning object by value.

**Q4. What is a destructor? What are its rules?**
A destructor frees resources when an object is destroyed. Rules: (1) same name as class preceded by `~`, (2) no parameters, (3) no return type, (4) cannot be overloaded, (5) only one per class, (6) called automatically.

**Q5. In what order are constructors and destructors called for multiple objects?**
Constructors are called in the order objects are created. Destructors are called in the reverse order (LIFO - last created, first destroyed).

**Q6. What is a dynamic constructor?**
A constructor that uses the `new` operator to allocate memory on the heap during object creation. The corresponding destructor should use `delete` to free the allocated memory.

---

## Unit 12: More on Constructors and Destructors

### Key Topics
- Default arguments in functions
- Constructors with default arguments
- Dynamic initialization of objects
- Destructor (detailed)

### Important Definitions and Concepts

- **Default Arguments**: Values provided in a function declaration that are automatically used if the caller doesn't supply a value for that parameter. Default arguments differ from constant arguments in that they CAN be overridden.
- **Constructor with Default Arguments**: A constructor where some or all parameters have default values. A constructor with ALL default arguments behaves like a default constructor.
- **Dynamic Initialization of Objects**: When initial values are provided during runtime (not compile time). Achieved by using constructors with different parameter types and passing runtime-determined values.
- **Memory Allocation at Runtime**: Using `new` to allocate memory when objects are created, and `delete` in the destructor to free it.
- **Object Scope**: An object is destroyed (destructor called) as soon as it goes out of scope (exits the block `{}`).
- **Default Destructor**: If you don't define a destructor, C++ provides one. However, the default destructor will NOT destroy dynamic objects (allocated with `new`).

### Key C++ Syntax

```cpp
// Default arguments in function
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}
sum(10, 20);       // Output: 30 (c=0, d=0)
sum(35, 65, 25);   // Output: 125 (d=0)

// Constructor with default arguments
class demo {
    int a, b, c;
public:
    demo(int x, int y, int z = 0) {
        a = x; b = y; c = z;
    }
    void display_sum() { cout << "Sum is " << a + b + c; }
};
demo d(20, 85);      // z defaults to 0
demo d1(35, 85, 96); // z = 96

// Dynamic initialization
class demo {
    int* ptr;
public:
    demo() { ptr = new int; *ptr = 100; }
    void display() { cout << "Value: " << *ptr; }
};
demo* obj1 = new demo();   // object on heap
obj1->display();
delete obj1;

// Destructor with dynamic object
class Calculator {
    int *num1, *num2;
public:
    Calculator(int a, int b) {
        num1 = new int; num2 = new int;
        *num1 = a; *num2 = b;
    }
    ~Calculator() { delete num1; delete num2; }   // releases memory
    int add() { return *num1 + *num2; }
};
```

### Exam Questions

**Q1. What are default arguments? How do they differ from constant arguments?**
Default arguments have pre-assigned values used when the caller does not supply a value. They CAN be overridden by the caller. Constant arguments cannot be changed at all.

**Q2. Is a constructor with all default arguments the same as a default constructor?**
True. A constructor with all default arguments can be called with no arguments, making it functionally equivalent to a default constructor.

**Q3. What is dynamic initialization of objects?**
Dynamic initialization means providing initial values to objects at runtime (not at compile time). Achieved by using constructors that accept runtime-determined values as parameters.

**Q4. When is the destructor called?**
The destructor is called automatically when: (1) an object goes out of scope, (2) a dynamically allocated object is deleted with `delete`, (3) the program terminates.

**Q5. What happens if you don't define a destructor?**
C++ provides a default destructor. However, the default destructor will NOT free dynamically allocated memory (allocated with `new`), causing memory leaks. Always define a destructor when using `new` in constructors.

**Q6. Summarize the differences between constructors and destructors.**

| Feature | Constructor | Destructor |
|---|---|---|
| Purpose | Initialize and allocate | Destroy and deallocate |
| Called when | Object created | Object goes out of scope |
| Arguments | Can have | Cannot have |
| Return type | None | None |
| Overloading | Allowed | Not allowed |
| Count per class | Multiple | Exactly one |
| Call order | Sequential | Reverse order |

---

## Unit 13: Inheritance

### Key Topics
- What is inheritance and its purpose
- Defining a derived class
- Modes of inheritance (public, private, protected)
- Types of inheritance (single, multiple, multilevel, hierarchical, hybrid)
- Making private members inheritable (protected)

### Important Definitions and Concepts

- **Inheritance**: A mechanism by which a derived (child) class acquires properties and behaviors of a base (parent) class. Promotes code reuse.
- **Base Class**: The class whose properties are inherited. Also called parent or superclass.
- **Derived Class**: The class that inherits from the base class. Also called child or subclass.
- **Modes of Inheritance**:
  - `public`: Public members of base → public in derived; protected → protected.
  - `private`: Public and protected of base → private in derived.
  - `protected`: Public and protected of base → protected in derived.
- **Single Inheritance**: One derived class inherits from one base class.
- **Multiple Inheritance**: One derived class inherits from more than one base class.
- **Multilevel Inheritance**: A chain: A → B → C (B inherits A, C inherits B).
- **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.
- **Hybrid Inheritance**: Combination of two or more types of inheritance.
- **Protected Access**: Members are accessible within the class and in derived classes, but NOT outside. The way to make base class members inheritable while still hiding them from outside.

### Key C++ Syntax

```cpp
// Single inheritance
class Animal {
public:
    string name;
    void eat() { cout << "Eating"; }
};
class Dog : public Animal {   // public inheritance
    void bark() { cout << "Barking"; }
};

// Multiple inheritance
class A { public: void showA() {} };
class B { public: void showB() {} };
class C : public A, public B { };   // inherits from both A and B

// Multilevel inheritance
class Vehicle { public: int speed; };
class Car : public Vehicle { public: int seats; };
class SportsCar : public Car { public: bool turbo; };

// Protected members
class Base {
protected:
    int x;   // accessible in derived class, not outside
public:
    int y;
};
class Derived : public Base {
    void show() { cout << x; }  // OK: x is protected, accessible here
};
```

### Visibility Table After Inheritance

| Base class member | public inheritance | private inheritance | protected inheritance |
|---|---|---|---|
| public | public | private | protected |
| protected | protected | private | protected |
| private | Not inherited | Not inherited | Not inherited |

### Exam Questions

**Q1. What is inheritance? What are its advantages?**
Inheritance allows a derived class to acquire properties and behaviors of a base class. Advantages: code reusability, reduced redundancy, extensibility, hierarchical classification.

**Q2. What are the three modes of inheritance in C++?**
`public`: base's public→public, protected→protected in derived. `private`: base's public and protected→private in derived. `protected`: base's public and protected→protected in derived.

**Q3. What is the difference between multiple and multilevel inheritance?**
Multiple: one class inherits from several base classes simultaneously (`class C : public A, public B`). Multilevel: chain where class B inherits from A, then C inherits from B (A→B→C).

**Q4. How do you make a base class member accessible in derived classes but not outside?**
Declare it as `protected`. Protected members are accessible within the class and all derived classes, but not from outside the class hierarchy.

**Q5. What happens to private members of a base class during inheritance?**
Private members of the base class are NOT inherited (not accessible in derived class) regardless of the inheritance mode. To make them accessible in derived classes, declare them `protected` instead.

**Q6. What is hierarchical inheritance? Give an example.**
Multiple derived classes inherit from a single base class. Example: `Animal` is the base; `Dog`, `Cat`, `Bird` are all derived from `Animal`.

**Q7. What is the syntax for a derived class?**
`class DerivedClass : access_specifier BaseClass { ... };`
Example: `class Student : public Person { ... };`

---

## Unit 14: File Handling

### Key Topics
- Why file handling?
- Stream classes for file I/O
- Creating, opening, closing files
- Reading from and writing to files
- Detecting end-of-file (EOF)
- File modes

### Important Definitions and Concepts

- **File**: A collection of data stored on a secondary storage device (disk). Persists beyond program execution.
- **Stream**: An abstraction representing a sequence of bytes. Used for I/O operations.
- **ifstream**: Input file stream class. Used for reading from files.
- **ofstream**: Output file stream class. Used for writing to files.
- **fstream**: File stream class. Used for both reading and writing.
- **open()**: Member function to associate a stream with a file. Syntax: `fileObject.open("filename", mode)`.
- **close()**: Member function to close the file and flush the buffer.
- **eof()**: Member function that returns true when the end of file is reached.
- **File Modes**:
  - `ios::in` — Open for reading
  - `ios::out` — Open for writing (creates file if not exists, truncates if exists)
  - `ios::app` — Append to end of file
  - `ios::ate` — Open and seek to end
  - `ios::binary` — Open in binary mode
  - `ios::trunc` — Truncate file if it exists

### Key C++ Syntax

```cpp
#include <fstream>
using namespace std;

// Writing to a file
ofstream outFile;
outFile.open("data.txt", ios::out);
if (outFile.is_open()) {
    outFile << "Hello, File!" << endl;
    outFile << 42 << endl;
    outFile.close();
}

// Reading from a file
ifstream inFile;
inFile.open("data.txt", ios::in);
string line;
while (getline(inFile, line)) {
    cout << line << endl;
}
inFile.close();

// Using fstream for both read and write
fstream file;
file.open("data.txt", ios::in | ios::out);
file.close();

// Opening via constructor
ofstream outFile2("output.txt");   // opens on creation

// Detecting EOF
ifstream fin("data.txt");
char ch;
while (fin.get(ch)) {     // or: while(!fin.eof())
    cout << ch;
}
fin.close();

// Appending to file
ofstream appendFile("data.txt", ios::app);
appendFile << "New line appended" << endl;
appendFile.close();
```

### Exam Questions

**Q1. What are the three file stream classes in C++? What is each used for?**
`ifstream` for reading (input), `ofstream` for writing (output), `fstream` for both reading and writing.

**Q2. What is the difference between ios::out and ios::app mode?**
`ios::out` opens for writing and truncates (empties) the file if it already exists. `ios::app` opens for writing but appends new data to the end, preserving existing content.

**Q3. How do you detect the end of a file in C++?**
Use `eof()` member function: `while(!fin.eof())`. Or test the stream directly: `while(fin)` or `while(fin.get(ch))`. The `eof()` function returns true when end-of-file is reached.

**Q4. What is the difference between opening a file via constructor vs open() function?**
Constructor: `ifstream fin("file.txt");` — opens automatically when the stream object is created. `open()`: `fin.open("file.txt");` — allows opening later or re-opening. Both achieve the same result; constructor is more concise.

**Q5. Why is file handling important in programming?**
Data stored in variables is lost when the program ends. File handling allows data to persist between program runs, enables large data storage beyond RAM, and allows data sharing between different programs.

**Q6. What does the close() function do?**
`close()` disconnects the file stream from the file, flushes any remaining buffer to the file, and releases system resources. It is important to call `close()` after file operations to prevent data loss or corruption.

**Q7. Write a program to count lines in a file.**

```cpp
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream fin("data.txt");
    int count = 0;
    string line;
    while (getline(fin, line)) count++;
    fin.close();
    cout << "Lines: " << count;
    return 0;
}
```

---

## Quick Reference: Key C++ Concepts

### Access Specifiers Summary
| Specifier | Within Class | Derived Class | Outside Class |
|---|---|---|---|
| private | Yes | No | No |
| protected | Yes | Yes | No |
| public | Yes | Yes | Yes |

### Constructors vs Destructors Quick Reference
| | Constructor | Destructor |
|---|---|---|
| Name | Same as class | ~ClassName |
| Called | At object creation | At object destruction |
| Arguments | Can have (optional) | Cannot have |
| Overloading | Yes | No |
| Count | Multiple allowed | Only one |

### Inheritance Visibility Quick Reference
| Base Member | public mode | protected mode | private mode |
|---|---|---|---|
| public | public | protected | private |
| protected | protected | protected | private |
| private | hidden | hidden | hidden |

### Key File Modes
| Mode | Description |
|---|---|
| ios::in | Read |
| ios::out | Write (truncate) |
| ios::app | Append |
| ios::binary | Binary mode |
| ios::ate | Seek to end on open |
