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

- **Input using `cin`**  
- **Sequence of statements (code flow)**
- **Selection statements:**  
  - *Single Selection*  
  - *Double Selection*  
  - *Multiple Selection*

---

## 🖥️ Software & Tools

To practice today’s lessons:

- 💻 **PC / Laptop:** Dev C++  
- 📱 **Android Mobile:** Coding C++  

---

## 💻 Taking Input: `cin`

The `cin` object is used to take input from the user.

#### Syntax

```cpp
cin >> variable_name;
```

#### Example

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

#### Example

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

Selection statements allow a program to make **decisions** based on specified conditions. They control the flow of execution by choosing different paths depending on whether conditions evaluate to true or false.  

There are three primary types of selection statements:

- **Single Selection**  
  - `if`  
  - Executes a block of code only if the condition is true.

- **Double Selection**  
  - `if-else`  
  - `ternary (?:)`  
  - Provides two possible execution paths: one if the condition is true, and another if it is false.

- **Multiple Selection**  
  - `if-else-if`  
  - `switch`  
  - Allows branching into multiple possible execution paths based on different conditions.


---

### ➡️ Single Selection

Executes a block of code only if the condition is true.

#### 1️⃣ `if` Statement

Executes a block **only if a condition is true**.

#### Syntax

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

### ➡️ Double Selection

Provides two possible execution paths: one if the condition is true, and another if it is false.

#### 1️⃣ `if-else` Statement

Executes **one block if condition is true** and **another if false**.

#### Syntax

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
----

#### 2️⃣ Ternary Operator (`?:`)

The **Ternary Operator** is a **short form of if-else**.
It is used to make simple decisions in a single line.

#### Syntax

```cpp
condition ? expression_if_true : expression_if_false;
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << "The number is " << result << endl;

    return 0;
}
```

---
 
### ➡️ Multiple Selection

Allows branching into multiple possible execution paths based on different conditions.

#### 1️⃣ `if-else-if` Ladder

Used to check **multiple conditions in sequence**.

#### Syntax

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
----

### 2️⃣ `switch` Statement

The `switch` statement is used when we want to compare **one variable with multiple constant values**.

It is a cleaner alternative to long `if-else-if` ladders when checking a single variable.

#### Syntax

```cpp
switch(expression) {
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    default:
        // runs if no case matches
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-3): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        default:
            cout << "Invalid Day" << endl;
    }

    return 0;
}
```

#### 📝 Explanation

* `expression` is evaluated once.
* It is compared with each `case`.
* When a match is found, that block runs.
* `break` stops further execution.
* `default` runs if no case matches.

### ⚠ Important Points

#### 1️⃣ `break` is Important

If we remove `break`, execution continues to the next case.

Example (without break):

```cpp
case 1:
    cout << "Monday";
case 2:
    cout << "Tuesday";
```

If input is 1 → it will print:

```
MondayTuesday
```

This is called **fall-through**.


#### 🎯 When to Use Switch?

✔ When comparing **one variable**
✔ When values are fixed (int, char)
✔ When many `if-else-if` conditions look messy

❌ Not suitable for:

* Range conditions (like `marks > 80`)
* Complex logical expressions

---

## 🔹 Nested `if`
### 📘 Nested `if`?

When an `if` statement is placed **inside another `if` statement**, it is called a **Nested If**.
It is used when a second condition depends on the first condition.

#### Syntax

```cpp
if(condition1) {
    if(condition2) {
        // statements
    }
}
```


#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        if (age >= 60) {
            cout << "Senior Citizen" << endl;
        } else {
            cout << "Adult" << endl;
        }
    } else {
        cout << "Minor" << endl;
    }

    return 0;
}
```

---

## 🔹 Dangling Else Problem

### 📘 What is Dangling Else?

The **Dangling Else** problem happens when it is unclear which `if` statement an `else` belongs to.

In C++, `else` always attaches to the **nearest unmatched `if`**.


#### ❌ Confusing Example

```cpp
if (condition1)
    if (condition2)
        cout << "Condition2 True";
    else
        cout << "Condition1 False";
```

Here, the `else` belongs to the **second (nearest) if**, not the first one.

#### ✅ Correct & Safe Way (Use Braces)

```cpp
if (condition1) {
    if (condition2) {
        cout << "Condition2 True";
    } else {
        cout << "Condition1 False";
    }
}
```

#### 📝 Important Rule:

Always use `{ }` with `if-else` to avoid logical confusion.

---
## 🧪 Practice Tasks

1. Take a number and check if it is **positive, negative, or zero**.
2. Take marks as input and print the **corresponding grade** using `if-else-if`.
3. Take two numbers and display the **greater number**.

---

# 📌 Day 2 Learning Outcomes

By the end of Day 2, you will be able to:

* ✔ Take input from the user using `cin`
* ✔ Understand sequential execution of statements
* ✔ Apply `if`, `if-else`, and `if-else-if` statements
* ✔ Use nested `if` for dependent conditions
* ✔ Implement the ternary operator for short decisions
* ✔ Avoid logical errors caused by dangling `else`
* ✔ Use `switch` for multiple fixed-value conditions
* ✔ Build interactive and decision-based programs

---

⭐ **Keep practicing and building your C++ foundation!** 🚀