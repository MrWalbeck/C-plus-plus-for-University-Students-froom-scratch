# 🚀 Programming Fundamentals (COC1071) — Day 04

## 🔁 Looping Mastery & Iteration Control

> 📘 **Course:** Programming Fundamentals  
> 🏷 **Code:** COC1071  
> 💻 **Language:** C++  
> 🎯 **Focus:** Practical Application of Loops & Iteration  

---

## 📂 Overview

Welcome to **Day 4** of the *C++ From Scratch* journey! 🚀  

In this session, we learn about **loops**, which allow us to execute a block of code multiple times without rewriting it.

---

## 📚 Topics Covered

- `for` loop  
- `while` loop  
- `do-while` loop  
- Nested loops  

---

## 🔹 1. for Loop

### 📌 Explanation

The `for` loop is used when the number of iterations is already known.  
It has three parts: initialization, condition, and update.

### 📌 Syntax

```cpp
for (initialization; condition; update)
{
    // code block
}
```

### 💡 Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    return 0;
}
```

👉 This loop starts from 1 and prints numbers up to 5.

---

## 🔹 2. while Loop

### 📌 Explanation

The `while` loop is used when the number of iterations is not known.  
It runs as long as the condition is true.

### 📌 Syntax

```cpp
while (condition)
{
    // code block
}
```

### 💡 Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}
```

👉 The loop continues until the condition becomes false.

---

## 🔹 3. do-while Loop

### 📌 Explanation

The `do-while` loop executes the code **at least once**, even if the condition is false.

### 📌 Syntax

```cpp
do
{
    // code block
} while (condition);
```

### 💡 Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}
```

👉 Code runs first, then condition is checked.

---

## 🔁 Nested Loops

### 📌 Explanation

A nested loop means a loop inside another loop.  
It is commonly used for patterns, tables, and complex logic.

---

### 💡 Example 1: Star Pattern

```cpp
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
```

👉 Outer loop controls rows, inner loop controls columns.

---

### 💡 Example 2: Number Pattern

```cpp
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
```

👉 Inner loop runs according to outer loop value.

---

## ✅ Summary

- Loops help repeat code efficiently  
- `for` loop → when iterations are known  
- `while` loop → condition-based loop  
- `do-while` → runs at least once  
- Nested loops → used for patterns and complex logic  

---

## 🧠 Practice Suggestions

- Print numbers from 1 to 100  
- Print even/odd numbers  
- Create multiplication tables  
- Make star patterns  

---
