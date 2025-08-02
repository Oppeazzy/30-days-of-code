
# Day 8: Dictionaries and Maps (Phone Book)

## 🧠 Problem Summary

Given `n` name–phone number pairs, store them in a dictionary (map). Then process `q` name queries and return the phone number if the name exists, or print `"Not found"` if it doesn't.

## 📥 Input Format

- The first line contains an integer `n` — number of entries.
- The next `n` lines contain a name and phone number separated by a space.
- The remaining lines contain one name per line — these are the queries.


## 📤 Output Format

For each query:
- If the name exists, print `name=phoneNumber`
- If it doesn’t exist, print `Not found`

## ✅ Sample Input

3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry

## ✅ Sample Output

sam=99912222
Not found
harry=12299933

## 🚀What i learned 
- Hash maps (`std::map` in C++)
- Input parsing and lookup
- Reading until end-of-file (EOF)

