# 01 - Maximum Subarray

- **Day:** 02 - Array (Part 2)
- **Question:** 1
- **Platform:** LeetCode
- **Problem:** [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## Approach: Kadane's Algorithm

Traverse the array while maintaining the sum of the current subarray (`curr`) and the maximum sum found so far (`ans`).

1. Add the current element to `curr`.
2. Update `ans` with the larger of `ans` and `curr`.
3. If `curr` becomes negative, reset it to zero because extending a subarray with a negative sum cannot improve a future maximum.
4. Return `ans`.

Updating `ans` before resetting `curr` ensures that arrays containing only negative values are handled correctly.

## Complexity Analysis

- **Time Complexity:** \(O(n)\) — each array element is visited once.
- **Auxiliary Space Complexity:** \(O(1)\) — only two variables are used.

## Code

See [Solution.cpp](./Solution.cpp).
