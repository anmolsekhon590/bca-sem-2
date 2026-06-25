# Exercise 10 — File Handling

---

## 1. Write to a File
Use `ofstream` to create a file `output.txt` and write three lines to it. Close the file after writing.

Expected file contents:
```
Line 1: Hello
Line 2: World
Line 3: Done
```

---

## 2. Read from a File
Use `ifstream` to open `output.txt` (created in 10-1) and read it line by line, printing each line to the console.

Expected output:
```
Line 1: Hello
Line 2: World
Line 3: Done
```

---

## 3. Append to a File
Use `ofstream` with `ios::app` mode to append a new line to `output.txt` without overwriting existing content. Then read and print the full file.

Expected output:
```
Line 1: Hello
Line 2: World
Line 3: Done
Line 4: Appended
```

---

## 4. Write and Read an Object to File
Create a `Student` class with `string name` and `int marks`. Write one object to a binary file using `write()`, then read it back using `read()` and print the details.

Expected output:
```
Name: Anmol | Marks: 95
```

---

Good luck — drop files here when done.
