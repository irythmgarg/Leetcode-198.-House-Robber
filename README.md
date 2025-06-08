# Leetcode-198.-House-Robber

# 🏠 House Robber Problem (Dynamic Programming Approaches)

This file implements three efficient dynamic programming approaches to solve the classic "House Robber" problem.

---

## 🚀 Problem Statement

You are a robber planning to rob houses along a street. Each house has a certain amount of money stashed, but adjacent houses have security systems connected. You **cannot rob two adjacent houses**. Find the maximum amount of money you can rob tonight **without alerting the police**.

---

## ✅ Approaches Covered

1. **Top-Down with Memoization** – recursive + optimized with caching.
2. **Bottom-Up with Tabulation** – iterative, no recursion.
3. **Pure Recursion** – brute-force (inefficient for large inputs).

---

## ⏱ Time & Space Complexity

- 🧠 **Top-Down (Memoization)**  
  - Time: O(n)  
  - Space: O(n) (due to recursion + DP array)

- 🧱 **Bottom-Up (Tabulation)**  
  - Time: O(n)  
  - Space: O(n)

- 🐌 **Pure Recursion**  
  - Time: O(2^n)  
  - Space: O(n) (stack space)

---

## 🧪 Example

```cpp

Input:
nums = [2, 7, 9, 3, 1]
Output:
12

```


Explanation: Rob house 0 (2), skip 1, rob 2 (9), skip 3, rob 4 (1) → **2 + 9 + 1 = 12**

---

## ✍️ Author

**Ridham Garg**  
🎓 B.Tech - Computer Engineering, Thapar University, Patiala  
💻 Passionate about algorithms, problem-solving, and clean code.

=========================================================================

*/

