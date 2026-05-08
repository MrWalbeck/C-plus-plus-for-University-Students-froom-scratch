# 🚀 C++ Programming: Mastering Functions (COC1071)

Welcome to **Day 5** of the Programming Fundamentals series. This guide covers everything from the basics to advanced function concepts in C++.

---

## 📂 Table of Contents

1. What is a Function?
1. Function Architecture (Signature)
1. Return Types: `void` vs `Data Type`
1. The 4 Categories of Functions
1. Parameter Passing: Value vs Reference
1. Advanced Concepts
   - Function Overloading
   - Default Arguments
   - Inline Functions
   - Recursion (Basic Intro)
1. Standard Library Functions

---

## 1️⃣ What is a Function?

A function is a self-contained block of code that performs a specific task. Think of it as a "machine": you give it some input, it processes it, and gives you an output.

**Why use functions?**

* **Modularity:** Breaks big problems into small, easy parts.
* **Efficiency:** Write the code once and use it many times.
* **Readability:** Makes your `main()` function clean and organized.

---

## 2️⃣ Function Architecture (Signature)

A function has three main parts:

1. **Declaration (Prototype):** Tells the compiler about the function name and type.
2. **Definition:** The actual body of the function.
3. **Calling:** Executing the function from `main()`.

### 📌 Syntax

```cpp
return_type function_name(parameter_list) {
    // Body of the function
    return value; // Optional
}

```

---

## 3️⃣ Return Types: `void` vs `Data Type`

### 🔹 `void` Functions

Used when you don't need to send any value back. It just executes the statements.

```cpp
void sayHi() {
    cout << "Hi User!";
}

```

### 🔹 Value-Returning Functions

Used when the function calculates something and sends the result back to the caller.

```cpp
int getSquare(int n) {
    return n * n;
}

```

---

## 4️⃣ The 4 Categories of Functions

| Category | Description | Example |
| --- | --- | --- |
| **No Return, No Parameter** | Simple execution | `void greet() { ... }` |
| **No Return, With Parameter** | Takes input, prints result | `void sum(int a, int b) { ... }` |
| **Return Type, No Parameter** | Generates/gets a value | `int getPin() { return 1234; }` |
| **Return Type, With Parameter** | Calculates based on input | `float area(int r) { return 3.14*r*r; }` |

---

## 5️⃣ Parameter Passing: Value vs Reference

### 🔹 Call by Value

A **copy** of the variable is passed. Original data remains safe.

```cpp
void update(int n) { n = 20; } 
// main: int x = 10; update(x); -> x is still 10

```

### 🔹 Call by Reference (`&`)

The **actual memory address** is passed. Changes inside the function will change the original variable.

```cpp
void update(int &n) { n = 20; }
// main: int x = 10; update(x); -> x becomes 20

```

---

## 6️⃣ Advanced Concepts (Missing Topics Added ✨)

### 🌟 Function Overloading

Multiple functions with the **same name** but different parameters.

```cpp
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; } // Overloaded

```

### 🌟 Default Arguments

Providing a default value if the user skips it during the call.

```cpp
void displayInfo(string name, string role = "Student") {
    cout << name << " is a " << role;
}
// call: displayInfo("Rameez"); -> Output: Rameez is a Student

```

### 🌟 Inline Functions

Used for very small functions to improve performance by reducing function call overhead.

```cpp
inline int cube(int s) { return s * s * s; }

```

### 🌟 Recursion

When a function calls itself.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

```

---

## 7️⃣ Standard Library Functions

Don't reinvent the wheel! Use built-in functions:

### 🔹 `<cmath>` (Math Functions)

* `pow(2, 3)` -> 8
* `sqrt(16)` -> 4
* `ceil(4.1)` -> 5

### 🔹 `<cctype>` (Character Functions)

* `toupper('a')` -> 'A'
* `isdigit('5')` -> true

---

## 💡 Pro-Tip

> Always keep your `main()` function at the top and your user-defined functions at the bottom. This is a professional coding standard. Use **Function Prototypes** at the top!

---
