# 54. Spiral Matrix

- **DSA Sheet:** Apna College
- **Day:** 4 — Array (Part 4)
- **Question:** 1
- **LeetCode:** [54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

## Approach: Boundary Simulation

Traverse the matrix layer by layer in clockwise spiral order. Maintain four boundaries:

- `top`: first unvisited row
- `bottom`: last unvisited row
- `left`: first unvisited column
- `right`: last unvisited column

For each layer:

1. Traverse the top row from left to right, then move `top` down.
2. Traverse the right column from top to bottom, then move `right) left.
3. If rows and columns remain, traverse the bottom row from right to left, then move `bottom` up.
4. Traverse the left column from bottom to top, then move `left` right.

The boundary checks prevent visiting elements twice when the remaining layer has only one row or one column.

## Complexity

- **Time:** `O(m × n)` — every matrix element is visited exactly once.
- **Space:** `O(1)` auxiliary space, excluding the output vector (which stores `m × n` elements).

## Solution

See [Solution.cpp](./Solution.cpp).
