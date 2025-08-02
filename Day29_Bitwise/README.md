
# HackerRank 30 Days of Code – Day 29: Bitwise AND

## 📌 Problem Description
Given set `S = {1, 2, 3, ..., N}`, and an integer `K`, you need to determine the maximum value of `A & B` (bitwise AND of `A` and `B`), where:

- `A < B`
- `A, B` are elements of `S`
- The value `(A & B) < K`



## 🖥️ Input Format
- The first line contains an integer `t`, the number of test cases.
- Each of the following `t` lines contains two space-separated integers `N` and `K`.



## ✅ Output Format
- For each test case, print the maximum possible value of `A & B` that is less than `K`.



## 💡 Example

### Input
3
5 2
8 5
2 2

### Output
1
4
0

📚 Concepts Covered
Bitwise AND (&) operation.

Nested Loops to iterate through all possible pairs (A, B).

Conditional Comparisons to track the maximum value under constraints.


🧠 What I Learned
How bitwise AND works and how it can be used to compare binary representations.

The importance of constraints in reducing possible values.

Practiced optimizing loops (brute force is acceptable here because of small constraints).