# C++ Sorting and Binary Search (STL)

## 📌 Description

This project demonstrates how to use Standard Template Library (STL) in C++ to:

* Store integers in a vector
* Sort the elements using `sort()`
* Search for a specific number using `binary_search()`

## 🚀 Features

* Uses `vector` to store dynamic data
* Sorts numbers in ascending order
* Efficient searching using binary search
* User input for both numbers and search value

## 🧠 Why Sorting is Required

Binary search works by repeatedly dividing the search range in half.
This method requires the data to be sorted; otherwise, it cannot determine which half to eliminate, leading to incorrect results.

## ⏱️ Time Complexity

* **Sorting:** O(n log n)
* **Binary Search:** O(log n)

## 💻 How It Works

1. The user enters the number of elements.
2. The program stores the values in a vector.
3. The vector is sorted using STL `sort()`.
4. The user enters a number to search.
5. The program checks if the number exists using `binary_search()`.

## ▶️ Example

```
Input:
How many numbers? 5
Enter numbers:
4 2 9 1 7
Enter number to search: 2

Output:
Sorted list: 1 2 4 7 9
Number FOUND!
```

## 🛠️ Technologies Used

* C++
* STL (Standard Template Library)

---
