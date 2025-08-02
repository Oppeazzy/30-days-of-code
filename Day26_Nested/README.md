
# HackerRank 30 Days of Code  guys !– Day 26: Nested Logic

## 📌 Problem Description
This challenge calculates the **library fine** for a returned book based on how late it is returned compared to the expected due date.

The fine is calculated using the following rules:

1. If the book is returned **on or before** the due date, no fine is charged (`fine = 0`).
2. If the book is returned **after the due day but in the same month and year**, the fine is `15 Hackos × number of days late`.
3. If the book is returned **after the due month but in the same year**, the fine is `500 Hackos × number of months late`.
4. If the book is returned **after the due year**, the fine is fixed at `10000 Hackos`.

---

## 🖥️ Input Format
- The first line contains three space-separated integers:  
  `d1 m1 y1` – the actual return date (day, month, year).
- The second line contains three space-separated integers:  
  `d2 m2 y2` – the expected return date (day, month, year).


## ✅ Output Format
- Print a single integer representing the fine charged.



## 💡 Example

### Input
9 6 2015
6 6 2015


### Output
45

📚 Concepts Covered
Conditional Statements (if, else if, else) – used to check multiple conditions in order.

Logical Comparisons – comparing year, month, and day to determine lateness.

Input and Output (cin, cout) – reading and printing data in C++.

Basic Arithmetic – calculating fines with multipliers.

🧠 What I Learned
How to use nested if statements to handle hierarchical conditions.

The importance of checking conditions in the correct order (year → month → day).

How to break down a problem into smaller rules and implement them step by step.

Practiced clean coding habits (using meaningful variable names, avoiding unnecessary computations).