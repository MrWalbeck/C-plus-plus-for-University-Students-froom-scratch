# 🚀 Programming Fundamentals (COC1071) — Day 01  
### C++ From Scratch for University Students

> 📚 Course: Programming Fundamentals  
> 🏫 Code: COC1071  
> 💻 Language: C++  
> 🎯 Focus: Core Syntax, Variables, Data Types & Operators  

---

## 📖 Overview

Day 1 focuses on building a **strong foundation in C++ programming**.  
This session transitions from theoretical computer concepts to writing structured and functional C++ programs.

C++ was developed by **Bjarne Stroustrup** and is widely used in:

- 🖥 Operating Systems  
- 🎮 Game Development  
- 🌐 Browsers & Compilers  
- ⚙ Embedded Systems  
- 🚀 High-Performance Applications  

---

# 📋 Topics Covered

- C++ Basic Structure  
- First Program  
- Variables  
- Keywords  
- Data Types & Range  
- Operators  
- Assignment Operators  
- Operator Precedence  
- Comments  
- Adding Two Integers  
- Using Characters  
- Integer Overflow  
- Code Flow  

---

# 🛠 Development Environment

**Tools Used:**

- 💻 Dev-C++ / Visual Studio  
- 📱 Coding C++ (Mobile Option)  
- ⚙ Standard C++ Compiler  

### 🔄 Compilation Process

```

Source Code (.cpp)
↓
Compiler
↓
Object Code (.obj)
↓
Executable File (.exe)

````

---

# ☃️ First Program — Hello World

```cpp
// myfirstprogram.cpp

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
````

### 🔎 Explanation

* `#include <iostream>` → Enables input/output
* `using namespace std;` → Allows usage of standard library
* `int main()` → Entry point of program
* `cout` → Output statement
* `return 0;` → Successful termination

---

# 📦 Variables in C++

A **variable** is a named memory location used to store data.

### Syntax

```cpp
data_type variable_name = value;
```

### Example

```cpp
int age = 20;
float price = 99.5;
char grade = 'A';
bool passed = true;
```

## 🏷 Naming Rules (Identifiers)

In C++, an **identifier** is the name given to variables, functions, or other user-defined items. Follow these rules to write valid identifiers:

1. **Allowed Characters:**  
   - Letters (`a-z`, `A-Z`)  
   - Digits (`0-9`)  
   - Underscores (`_`)  

2. **Cannot Start with a Digit:**  
   - Valid: `var1`, `_value`  
   - Invalid: `123var` ❌  

3. **Cannot Use Reserved Keywords:**  
   Keywords like `int`, `return`, `void`, `if`, etc., **cannot** be used as identifiers.  
   - Invalid: `int = 5;` ❌  
   - Valid: `myInt = 5;` ✅  

4. **Case-Sensitive:**  
   - `number` and `Number` are **different identifiers** in C++.  
   - Always be consistent with capitalization.  

5. **Best Practices:**  
   - Use descriptive names (`studentAge`, `totalMarks`)  
   - Avoid single-letter names except for loop counters (`i`, `j`)  
   - Maintain readability with underscores or camelCase  

### ✅ Example

```cpp
int studentAge = 20;      // Valid
float _price = 99.5;      // Valid
char grade = 'A';          // Valid
int 123value = 50;        // ❌ Invalid, starts with a digit
int return = 5;           // ❌ Invalid, keyword
```

---

# 🔑 Keywords in C++

Keywords are reserved words and cannot be used as identifiers.

Examples:

```
int, float, double, char, bool,
if, else, while, for, return, void
```

---

# 🔢 Data Types & Variable Range

| Data Type | Purpose          | Size    | Approximate Range    |
| --------- | ---------------- | ------- | -------------------- |
| int       | Whole numbers    | 4 bytes | -2.1B to +2.1B       |
| char      | Single character | 1 byte  | -128 to 127          |
| float     | Decimal numbers  | 4 bytes | ~7 digits precision  |
| double    | Large decimals   | 8 bytes | ~15 digits precision |
| bool      | Logical values   | 1 byte  | true / false         |
| string    | Text (sequence of characters) | Depends on content | "Hello" |

---

# ➗ Operators in C++

## 1️⃣ Arithmetic Operators

```cpp
int a = 10, b = 5;

cout << a + b << endl;  // Addition
cout << a - b << endl;  // Subtraction
cout << a * b << endl;  // Multiplication
cout << a / b << endl;  // Division
cout << a % b << endl;  // Modulus
```

---

## 2️⃣ Assignment Operators

```cpp
int x = 5;

x += 3;  // x = 8
x -= 2;  // x = 6
```

---

## 3️⃣ Comparison (Relational) Operators

Relational operators are used to **compare two values**. They return `true` or `false`.

| Operator | Name                     | Description                                       | Example  |
| -------- | ------------------------ | ------------------------------------------------- | -------- |
| `==`     | Equal to                 | Checks if two values are equal                    | `a == b` |
| `!=`     | Not equal to             | Checks if two values are not equal                | `a != b` |
| `>`      | Greater than             | Checks if left value is greater than right        | `a > b`  |
| `<`      | Less than                | Checks if left value is less than right           | `a < b`  |
| `>=`     | Greater than or equal to | Checks if left value is greater or equal to right | `a >= b` |
| `<=`     | Less than or equal to    | Checks if left value is less or equal to right    | `a <= b` |

**Example:**

```cpp
int a = 10, b = 20;

cout << (a == b) << endl;  // 0 (false)
cout << (a != b) << endl;  // 1 (true)
cout << (a > b) << endl;   // 0 (false)
cout << (a < b) << endl;   // 1 (true)
cout << (a >= b) << endl;  // 0 (false)
cout << (a <= b) << endl;  // 1 (true)
```

---

## 4️⃣ Logical Operators

```
&&   (AND)
||   (OR)
!    (NOT)
```

---

# 🧮 Operator Precedence

Order of execution:

1. Parentheses `( )` — Highest
2. `*  /  %`
3. `+  -` — Lowest

### Example

```
2 + 3 * 4  = 14
(2 + 3) * 4 = 20
```

---

# 💬 Comments in C++

```cpp
// Single-line comment

/*
Multi-line
comment
*/
```

Comments improve readability and maintainability.

---

# 🧪 Practical Examples

## ➤ Adding Two Integers

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    return 0;
}
```

---

## ➤ Using Character

```cpp
char grade;

cout << "Enter your grade: ";
cin >> grade;

cout << "Your grade: " << grade << endl;
```

---

# ⚠ Integer Overflow

Overflow occurs when a value exceeds the maximum limit of its data type.

```cpp
int maxInt = 2147483647;
cout << maxInt + 1;  // Overflow occurs
```

---

# 🔄 Code Flow

C++ executes statements **sequentially from top to bottom** unless control statements modify the flow.

Understanding execution flow is essential for logical program design.

---

# 📌 Day 1 Summary

### 🎯 Learning Outcomes

By the end of Day 1, I can:

* Understand C++ program structure
* Declare and use variables
* Work with fundamental data types
* Apply arithmetic and logical operators
* Understand precedence rules
* Write simple functional programs

---

⭐ **Keep practicing and building your C++ foundation!** 🚀