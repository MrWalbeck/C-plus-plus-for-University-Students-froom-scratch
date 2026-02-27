# 🚀 Programming Fundamentals (COC1071) — Day 03

### Control Flow Mastery & Practical Implementation

> 📚 Course: Programming Fundamentals
> 🏫 Code: COC1071
> 💻 Language: C++
> 🎯 Focus: Practical Application of Selection & Flow Control

---

# 📖 Overview


Welcome to **Day 3** of the *C++ From Scratch* journey! 🚀

Today we consolidate **all the concepts from Day 2** and focus on **practical implementation of selection statements**. By the end of this session, you will:

* Understand how to handle **user input** effectively.
* Apply **sequential execution** in programs.
* Master **decision-making constructs** including `if`, `if-else`, `if-else-if`, `nested if`, `ternary operator`, and `switch`.
* Write **interactive programs** that respond dynamically to user input.

This session bridges **concepts to practical application**, ensuring you can structure logical programs with multiple conditions confidently.


---

# 📋 Topics Reviewed & Practiced

1. **Input using `cin`** – Taking user input safely.
2. **Sequence of statements** – Ensuring proper program flow.
3. **Single Selection (`if`)** – Executing code only when a condition is true.
4. **Double Selection (`if-else` & Ternary)** – Providing alternative execution paths.
5. **Multiple Selection (`if-else-if` & `switch`)** – Handling multiple possible outcomes.
6. **Nested `if`** – Dependent decisions inside another decision.
7. **Dangling `else` problem** – Understanding proper association of `else` statements to avoid logical errors.

---

# 🧠 Key Takeaways

* **Input & Flow:** Sequential execution matters; each statement runs in order unless directed otherwise by control statements.
* **Decision Making:** Choose the simplest control structure appropriate for the problem:

  * `if` → simple conditions
  * `if-else` → two alternatives
  * `if-else-if` → multiple conditions
  * `nested if` → dependent conditions
  * `ternary` → short, single-line decisions
  * `switch` → multiple fixed-value choices
* **Logical Safety:** Always use `{}` braces to prevent **dangling else** mistakes.
* **Program Structuring:** Interactive programs should clearly prompt for input and display results.

---

# 🔹 1️⃣ Input & Sequence Flow

### 📘 Explanation

Programs execute **line by line from top to bottom** unless control statements change the flow.
Input makes the program interactive.

### 🧩 Syntax

```cpp
cin >> variable;
```

### ⭐ Important Points

* Execution is sequential by default.
* Each statement runs in order.
* `cin` waits for user input.
* Always display a message before taking input.

---

# 🔹 2️⃣ Single Selection (`if`)

### 📘 Explanation

Used when we want to execute a block **only if a condition is true**.

### 🧩 Syntax

```cpp
if(condition) {
    // statements
}
```

### ⭐ Important Points

* Condition must return true or false.
* Runs only when condition is true.
* Skips block if condition is false.

---

# 🔹 3️⃣ Double Selection (`if-else`)

### 📘 Explanation

Used when there are **two possible outcomes**.

### 🧩 Syntax

```cpp
if(condition) {
    // true block
} else {
    // false block
}
```

### ⭐ Important Points

* One block always executes.
* Useful for even/odd, pass/fail type problems.
* Improves logical branching.

---

# 🔹 4️⃣ Multiple Selection

## ➤ `if-else-if` Ladder

### 📘 Explanation

Used when checking **multiple conditions in order**.

### 🧩 Syntax

```cpp
if(condition1) {
}
else if(condition2) {
}
else {
}
```

### ⭐ Important Points

* Conditions are checked top to bottom.
* First true condition executes.
* Order matters.

---

## ➤ `switch` Statement

### 📘 Explanation

Used when comparing **one variable against multiple constant values**.

### 🧩 Syntax

```cpp
switch(expression) {
    case value:
        break;
    default:
}
```

### ⭐ Important Points

* Works with int, char.
* Must use `break` to stop execution.
* Cleaner than long `if-else-if`.

---

# 🔹 5️⃣ Nested `if`

### 📘 Explanation

An `if` inside another `if`.
Used when second condition depends on first.

### 🧩 Syntax

```cpp
if(condition1) {
    if(condition2) {
    }
}
```

### ⭐ Important Points

* Inner `if` runs only if outer condition is true.
* Used in grading systems, eligibility checks.
* Improves logical structure.

---

# 🔹 6️⃣ Ternary Operator

### 📘 Explanation

Short form of `if-else`.
Used for simple decisions in one line.

### 🧩 Syntax

```cpp
condition ? expression1 : expression2;
```

### ⭐ Important Points

* Good for short conditions only.
* Avoid for complex logic.
* Makes code shorter but must remain readable.

---

# 🔹 7️⃣ Dangling Else

### 📘 Explanation

Occurs when it is unclear which `if` an `else` belongs to.
In C++, `else` attaches to the nearest unmatched `if`.

### ⭐ Important Points

* Always use `{}` braces.
* Prevents logical confusion.
* Improves readability.

---

# 🧪 Day 3 – Structured Practice Tasks

----

## 1️⃣ Single Selection – `if`

**Question:**
Write a C++ program that:

* Takes a number as input.
* If the number is greater than 100, display:
  `"Number is greater than 100"`.

👉 Only use `if` statement.
👉 Do not use `else`.

----

## 2️⃣ Double Selection – `if-else`

**Question:**
Write a C++ program that:

* Takes an integer as input.
* Checks whether the number is **even or odd**.
* Displays the result accordingly.

👉 Use `if-else` only.

----

## 3️⃣ Multiple Selection – `if-else-if`

**Question:**
Write a C++ program that:

* Takes marks (0–100) as input.
* Displays grade according to:

| Marks    | Grade |
| -------- | ----- |
| 90+      | A     |
| 75–89    | B     |
| 60–74    | C     |
| Below 60 | Fail  |

👉 Use `if-else-if` ladder.
👉 Conditions must be written in correct order.

----

## 4️⃣ Nested `if`

**Question:**
Write a C++ program that:

* Takes age as input.
* If age is 18 or above:

  * Check if age is 60 or above → Display `"Senior Citizen"`
  * Otherwise → Display `"Adult"`
* If age is below 18 → Display `"Minor"`

👉 Use nested `if`.

----

## 5️⃣ Ternary Operator

**Question:**
Write a C++ program that:

* Takes a number as input.
* Uses the ternary operator to check whether the number is **positive or negative**.
* Display the result.

👉 Use `?:` operator instead of `if-else`.

----

## 6️⃣ `switch` Statement

**Question:**
Write a C++ program that:

* Displays a menu:

  ```
  1. Addition
  2. Subtraction
  3. Multiplication
  ```
* Takes user choice.
* Performs operation on two numbers.
* Displays result.
* Shows `"Invalid Choice"` if input is not 1–3.

👉 Use `switch` statement.
👉 Must include `break`.

---

# 🎯 Practice Objective

These tasks ensure students can:

* Apply each selection type correctly
* Choose the correct control structure
* Write logically structured programs
* Avoid common mistakes

---

# 📌 Day 3 Learning Outcomes

By the end of Day 3, you will:

* ✔ Clearly understand program flow
* ✔ Confidently use selection statements
* ✔ Write logically structured conditions
* ✔ Avoid common logical mistakes
* ✔ Apply decision-making in real problems

---

⭐ **Keep practicing and building your C++ foundation!** 🚀