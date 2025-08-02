
# HackerRank 30 Days of Code – Day 4: Class vs. Instance

## 📌 Problem Description
required to write a `Person` class with the following specifications:
- An **instance variable** `age`.
- A **constructor** that takes an initial age and checks if it is valid:
  - If the initial age is negative, set `age = 0` and print `"Age is not valid, setting age to 0."`.
- A method `amIOld()` that prints whether the person is:
  - `"You are young."` if `age < 13`.
  - `"You are a teenager."` if `13 <= age < 18`.
  - `"You are old."` if `age >= 18`.
- A method `yearPasses()` that increases the `age` by 1.

The program creates a `Person` object for each test case and demonstrates how the methods work.

## 🖥️ Input Format
- The first line contains an integer `T`, the number of test cases.
- Each of the next `T` lines contains an integer that represents the `age` of a `Person`.


## ✅ Output Format
- For each test case, print the result of `amIOld()` before and after three calls to `yearPasses()`.



## 💡 Example

### Input
4
-1
10
16
18


### Output
Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.




## 📚 Concepts Covered
- **Classes and Objects** in C++.
- **Constructors** and how they initialize object state.
- **Conditional Statements** for logic branching.
- **Encapsulation** of behavior in class methods.



## 🧠 What I Learned
- How to create a simple class in C++.
- Using constructors to validate and initialize object properties.
- Applying methods to manipulate and access object state.
- Gained a clearer understanding of **object-oriented programming basics**.


