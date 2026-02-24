# 🚀 Programming Fundamentals (COC1071) — Day 01  
### C++ From Scratch

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

## 🔑 Keywords in C++

Keywords are **reserved words** in C++ with predefined meanings.  
They **cannot be used as identifiers** (variable names, function names, etc.).

### Common C++ Keywords

```cpp
int, float, double, char, bool,
if, else, while, for, return, void,
break, continue, switch, case, default
````

**Example of Invalid Use:**

```cpp
int return = 5;  // ❌ Invalid, 'return' is a keyword
float int = 3.14; // ❌ Invalid, 'int' is a keyword
```

**Example of Valid Use:**

```cpp
int age = 20;        // ✅ Valid
float price = 99.5;  // ✅ Valid
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
Arithmetic operators are used to **perform mathematical calculations**.

| Operator | Name           | Description                 | Example |
| -------- | -------------- | --------------------------- | ------- |
| `+`      | Addition       | Adds two operands           | `a + b` |
| `-`      | Subtraction    | Subtracts second from first | `a - b` |
| `*`      | Multiplication | Multiplies two operands     | `a * b` |
| `/`      | Division       | Divides first by second     | `a / b` |
| `%`      | Modulus        | Remainder after division    | `a % b` |

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << a + b << endl;       // 13
    cout << "Subtraction: " << a - b << endl;    // 7
    cout << "Multiplication: " << a * b << endl; // 30
    cout << "Division: " << a / b << endl;       // 3
    cout << "Modulus: " << a % b << endl;        // 1

    return 0;
}
```

---

## 2️⃣ Assignment Operators

Assignment operators are used to **store or update values in variables**.  
They combine arithmetic operations with assignment to simplify code.

| Operator | Description                  | Example                  |
|----------|------------------------------|-------------------------|
| `=`      | Assign value                 | `a = 5;`               |
| `+=`     | Add and assign               | `a += 3;` → `a = a + 3` |
| `-=`     | Subtract and assign          | `a -= 2;` → `a = a - 2` |
| `*=`     | Multiply and assign          | `a *= 4;` → `a = a * 4` |
| `/=`     | Divide and assign            | `a /= 2;` → `a = a / 2` |
| `%=`     | Modulus and assign           | `a %= 3;` → `a = a % 3` |

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;  // a = 15
    a -= 3;  // a = 12
    a *= 2;  // a = 24
    a /= 4;  // a = 6
    a %= 4;  // a = 2

    cout << "Final value of a: " << a << endl;

    return 0;
}
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

---

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

Logical operators are used to **combine or invert boolean expressions**.  
They return `true` or `false`.

| Operator | Name     | Description                         | Example               |
|----------|---------|-------------------------------------|----------------------|
| `&&`     | AND     | True if **both** conditions are true | `(a > 5 && b < 10)` |
| `||`     | OR      | True if **at least one** condition is true | `(a > 5 || b < 10)` |
| `!`      | NOT     | Inverts the boolean value           | `!(a == b)`          |

---

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    if (a > 5 && b < 10) {
        cout << "Both conditions are true" << endl;
    }

    if (a > 5 || b > 10) {
        cout << "At least one condition is true" << endl;
    }

    if (!(a == b)) {
        cout << "a is not equal to b" << endl;
    }

    return 0;
}
```

---

## 5️⃣ Operator Precedence

Operator precedence defines the **order in which operators are evaluated** in an expression.
Knowing precedence helps prevent logical errors in calculations and conditions.

### Precedence Table (Common Operators)

| Precedence | Operators            | Description                       |   |            |
| ---------- | -------------------- | --------------------------------- | - | ---------- |
| Highest    | `()`                 | Parentheses                       |   |            |
| High       | `*`, `/`, `%`        | Multiplication, Division, Modulus |   |            |
| Medium     | `+`, `-`             | Addition, Subtraction             |   |            |
| Low        | `<`, `>`, `<=`, `>=` | Relational Operators              |   |            |
| Lower      | `==`, `!=`           | Equality / Inequality             |   |            |
| Lowest     | `&&`                 | Logical AND                       |   |            |
| Lowest     | `                    |                                   | ` | Logical OR |

---

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 2 + 3 * 4;      // Multiplication first → 2 + 12 = 14
    int b = (2 + 3) * 4;    // Parentheses first → 5 * 4 = 20

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
```

---

# 💬 Comments in C++


Comments are **non-executable lines** used to explain your code.
They help improve **readability, maintainability, and debugging**.

### Types of Comments

1. **Single-line Comment**

```cpp
// This is a single-line comment
int a = 5;  // Comment after code
```

2. **Multi-line Comment**

```cpp
/*
This is a multi-line comment
Useful for explanations or documentation
*/
int b = 10;
```

✅ **Tip:** Always comment your code, especially when it contains **complex logic**.
✅ Comments do **not affect program execution**.

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