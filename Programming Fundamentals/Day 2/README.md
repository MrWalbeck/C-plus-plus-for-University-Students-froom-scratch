# 🚀 Programming Fundamentals (COC1071) — Day 02  
### Input, Sequence & Selection Statements

> 📚 Course: Programming Fundamentals  
> 🏫 Code: COC1071  
> 💻 Language: C++  
> 🎯 Focus: User Input, Program Flow & Decision Making  

---

## 📖 Overview

Welcome to **Day 2** of the *C++ From Scratch for University Students* journey! 🚀  
Today we learn how to take input from the user, execute statements in sequence, and make decisions using selection statements.

This session transitions from **static programs** to **interactive and logical programs**.

---

## 📋 Topics Covered

- Input using `cin`  
- Sequence of statements (code flow)  
- Selection statements:  
  - `if`  
  - `if-else`  
  - `if-else-if` Ladder  

---

## 🖥️ Software & Tools

To practice today’s lessons:

- 💻 **PC / Laptop:** Dev C++  
- 📱 **Android Mobile:** Coding C++  

---

## 💻 Taking Input: `cin`

The `cin` object is used to take input from the user.

### Syntax

```cpp
cin >> variable_name;
````

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}
```

---

## 🔹 Sequence of Statements

C++ executes statements **one after another in order**.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Step 1" << endl;
    cout << "Step 2" << endl;
    cout << "Step 3" << endl;
    return 0;
}
```

---

## 🔹 Selection Statements

Selection statements allow the program to make **decisions** based on conditions.

---

### 1️⃣ `if` Statement

Executes a block **only if a condition is true**.

```cpp
if(condition) {
    // statements
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    return 0;
}
```

---

### 2️⃣ `if-else` Statement

Executes **one block if condition is true** and **another if false**.

```cpp
if(condition) {
    // statements if true
} else {
    // statements if false
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
```

---

### 3️⃣ `if-else-if` Ladder

Used to check **multiple conditions in sequence**.

```cpp
if(condition1) {
    // statements
} else if(condition2) {
    // statements
} else {
    // statements if none match
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 75) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }

    return 0;
}
```

---

## 🧪 Practice Tasks

1. Take a number and check if it is **positive, negative, or zero**.
2. Take marks as input and print the **corresponding grade** using `if-else-if`.
3. Take two numbers and display the **greater number**.

---

## 📌 Day 2 Learning Outcomes

By the end of Day 2, you should be able to:

* Take input from the user using `cin`
* Execute statements in **sequence**
* Apply **if**, **if-else**, and **if-else-if** statements in programs
* Solve logical problems interactively

---

⭐ **Keep practicing and building your C++ foundation!** 🚀