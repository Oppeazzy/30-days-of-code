
Day 28: RegEx, Patterns, and Intro to Databases

## 📌 Problem Description
Given **N** pairs of first names and email addresses. The task is to **print all first names of people who have Gmail accounts**, sorted alphabetically.

### Requirements:
1. Accept `N` entries, each with a first name and email address.
2. Filter out only those entries where the email address ends with `@gmail.com`.
3. Print the filtered first names in **alphabetical order**, one per line.

## 🖥️ Input Format
- First line: an integer `N`, the number of entries.
- Next `N` lines: each contains `firstName` and `emailID` separated by a space.


## ✅ Output Format
- Print all Gmail user first names, sorted alphabetically.


## 💡 Example

### Input
6
riya riya@gmail.com
julia julia@julia.me
julia julia@gmail.com
sjobs sjobs@apple.com
james james@gmail.com
sami sami@gmail.com


### Output
james
julia
riya
sami

📚 Concepts Covered
String Searching (find) to detect substrings like @gmail.com.

Lists in C++ STL (list<string>) to store and sort data.

Sorting using list.sort() for alphabetical order.

Basic Input Handling with loops.

🧠 What I Learned
How to filter data based on patterns (e.g., email domain).

Using STL containers effectively for collection and sorting.

Importance of string manipulation in real-world data handling.

Simplified use of regular expressions (though here .find() is sufficient).


