# 📅 Day 2 — Input, Sequence & Selection Statements

Welcome to **Day 2** of the *C++ From Scratch for University Students* journey! 🚀  
Today we’ll learn how to take input from the user, execute statements in sequence, and make decisions using selection statements.

---

## 🎯 Topics Covered

- Input using `cin`  
- Sequence of statements  
- Selection statements:  
  - `if`  
  - `if-else`  
  - `if-else-if`

---

## 🖥️ Software & Tools

To practice today’s lessons:

- 💻 **PC / Laptop**: Dev C++  
- 📱 **Android Mobile**: Coding C++  

---

## 💻 Taking Input: `cin`

`cin` is used to take input from the user.

### Syntax

```cpp
int a;
cin>>a;
```
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
````

---

## 🔹 Sequence of Statements

C++ executes statements **one after another in order**.

### Syntax

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

### 1️⃣ `if` Statement

Executes a block **only if a condition is true**.

### Syntax

```cpp
if(condition)
{
 statement(s)
}
```
### Example

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

### 2️⃣ `if-else` Statement

Executes one block if the condition is true, **another if false**.

### Syntax

```cpp
if(condition)
{
 statement(s)
}
else
{
 statement(s)
}
```
### Example

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

### 3️⃣ `if-else-if` Ladder

Checks multiple conditions **in sequence**.

### Syntax

```cpp
if(condition)
{
 statement(s)
}
else if(condition)
{
 statement(s)
}
else
{
 statement(s)
}
```
### Example

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

1. Take a number from the user and check if it is **positive, negative, or zero**.
2. Take marks as input and print the **corresponding grade** using `if-else-if`.

---

## 📈 Outcome

After completing Day 2, you should be able to:

- Take input using `cin`
- Execute statements in sequence
- Use **if**, **if-else**, and **if-else-if** selection statements

---

⭐ **Keep practicing and building your C++ foundation!** 🚀
