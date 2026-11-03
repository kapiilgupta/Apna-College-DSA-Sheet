# 240. Search a 2D Matrix II

- **DSA Sheet:** Apna College
- **Day:** 4 — Array (Part 4)
- **Question:** 4
- **LeetCode:** [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)

## Approach: Staircase Search

The matrix is sorted in ascending order across each row (left to right) and each column (top to bottom). Start at the top-right corner:

1. If the current element equals the target, return `true`.
2. If the current element is greater than the target, move left. Every element below it in that column is at least as large, so that column cannot contain the target.
3. If the current element is smaller than the target, move down. Every element to its left in that row is no larger, so that row cannot contain the target.
4. Continue until the target is found or the search moves outside the matrix.

## Complexity

- **Time:** `O(m + n)` — each move eliminates one row or one column.
- **Space:** `O(1)` — only two indices are used.

## Solution

See [Solution.cpp](./Solution.cpp).
