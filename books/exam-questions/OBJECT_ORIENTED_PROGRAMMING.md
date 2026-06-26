# Object Oriented Programming — Exam Questions

| Unit | Topic |
|------|-------|
| 01 | [Principles of OOP](#unit-01-principles-of-oop) |
| 02 | [Basics of C++](#unit-02-basics-of-c) |
| 03 | [Operators and Type Casting](#unit-03-operators-and-type-casting) |
| 04 | [Control Structures](#unit-04-control-structures) |
| 05 | [Pointers and Structures](#unit-05-pointers-and-structures) |
| 06 | [Classes and Objects](#unit-06-classes-and-objects) |
| 07 | [More on Classes and Objects](#unit-07-more-on-classes-and-objects) |
| 08 | [Handling Functions](#unit-08-handling-functions) |
| 09 | [More on Functions](#unit-09-more-on-functions) |
| 10 | [Static Members and Polymorphism](#unit-10-static-members-and-polymorphism) |
| 11 | [Constructors and Destructors](#unit-11-constructors-and-destructors) |
| 12 | [More on Constructors and Destructors](#unit-12-more-on-constructors-and-destructors) |
| 13 | [Inheritance](#unit-13-inheritance) |
| 14 | [File Handling](#unit-14-file-handling) |

---

## Unit 01: Principles of OOP

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

**Q7. What is a constant in C++? How is it declared?**
A constant is a fixed value that cannot be changed during execution. Declared using the `const` keyword: `const float PI = 3.14159;`. Constants must be initialized at declaration.

---

## Unit 03: Operators and Type Casting

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

**Q7. What is class-to-class type conversion? How is it implemented?**
Converting an object of one class to another class type. Implemented either by a constructor in the destination class that accepts the source class object, or by a casting operator in the source class that returns the destination type.

---

## Unit 04: Control Structures

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

**Q7. What is the difference between for and while loops?**
`for` is used when the number of iterations is known in advance (init, condition, and update are in one line). `while` is used when iterations depend on a condition that may change unpredictably. Both are entry-controlled.

---

## Unit 05: Pointers and Structures

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

**Q7. Why were C++ classes created to replace C structures?**
C structures lacked data hiding (all members public), couldn't have member functions, had no constructors/destructors, and no operator overloading. C++ classes solved all these by adding access specifiers, member functions, and OOP support.

---

## Unit 06: Classes and Objects

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

**Q7. What is the `this` pointer?**
`this` is an implicit pointer available inside every non-static member function that points to the object on which the function was called. Used to resolve ambiguity when a parameter name matches a data member name.

---

## Unit 07: More on Classes and Objects

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

**Q7. What is the syntax to dynamically allocate an array and free it?**
Allocate: `int *arr = new int[n];`. Free: `delete[] arr;`. The `[]` in `delete[]` is essential — using plain `delete` on an array only destroys the first element.

---

## Unit 08: Handling Functions

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

**Q7. What is the difference between actual arguments and formal arguments?**
Formal arguments (parameters) are variables listed in the function definition. Actual arguments are the values passed at the function call site. In call by value the actual value is copied; in call by reference the address is passed.

---

## Unit 09: More on Functions

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

**Q7. What are the advantages and disadvantages of inline functions?**
Advantages: eliminates function call overhead, faster execution for small functions. Disadvantages: code bloat (function body duplicated at every call site), compiler may ignore the `inline` hint for complex functions.

---

## Unit 10: Static Members and Polymorphism

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

**Q7. What is operator overloading? How does it relate to polymorphism?**
Operator overloading allows standard operators (`+`, `-`, `==`, etc.) to be redefined for user-defined types. It is a form of compile-time (static) polymorphism — the same operator symbol behaves differently depending on the operand types.

---

## Unit 11: Constructors and Destructors

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

**Q7. Why can't constructors be inherited?**
Constructors are class-specific — they initialize the particular data members of their own class. A derived class may have different data members, so it needs its own constructor. The base class constructor is called implicitly (or explicitly via initializer list) but not inherited as a callable member.

---

## Unit 12: More on Constructors and Destructors

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

**Q7. What is a constructor initializer list? Give an example.**
An initializer list initializes data members before the constructor body runs. Syntax: `ClassName(int a, int b) : x(a), y(b) { }`. Required for `const` members and reference members since they cannot be assigned after creation.

---

## Unit 13: Inheritance

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
