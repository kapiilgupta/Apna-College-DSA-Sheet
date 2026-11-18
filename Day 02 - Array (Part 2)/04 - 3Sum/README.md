# 4. 3Sum

- **Platform:** LeetCode
- **Problem:** [15. 3Sum](https://leetcode.com/problems/3sum/)
- **DSA Sheet:** Array (Part 2), Problem 4
- **Difficulty:** Medium

## Approach: Sorting + Two Pointers

1. Sort the input array.
2. Iterate through the array and fix one element at index `j).
3. Skip the current fixed element if it is equal to the previous one. This avoids generating duplicate triplets.
4. Initialize two pointers: `left = j + 1) and `right = n - 1).
5. Calculate the sum of the three selected elements.
6. If the sum is zero, add the triplet to the answer. Then skip duplicate values at both pointer positions and move both pointers inward.
7. If the sum is greater than zero, move `right) left to reduce the sum.
8. If the sum is less than zero, move `left) right to increase the sum.
9. Continue until all unique triplets have been considered.

## Complexity Analysis

Let `n` be the number of elements.

- **Time Complexity:** `O(n^2)` — sorting takes `O(n log n)`, followed by an outer loop and a linear two-pointer scan.
- **Auxiliary Space Complexity:** `O(1)` excluding sorting implementation details and the output.

## Important Detail

Duplicate skipping at the fixed index and at both pointer positions ensures that the result contains only unique triplets.
