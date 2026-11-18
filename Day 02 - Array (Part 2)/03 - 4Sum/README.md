# 3. 4Sum

- **Platform:** LeetCode
- **Problem:** [18. 4Sum](https://leetcode.com/problems/4sum/)
- **DSA Sheet:** Array (Part 2), Problem 3
- **Difficulty:** Medium

## Approach: Sorting + Two Pointers

1. Sort the input array so that two-pointer searching can be used and duplicate values can be skipped.
2. Fix the first element with index `i). Skip it if it is the same as the previous value to avoid duplicate quadruplets.
3. Fix the second element with index `j). Similarly, skip duplicate values for this position.
4. Initialize two pointers: `left = j + 1` and `right = n - 1`.
5. Calculate the sum of the four selected values using `long long` to avoid integer overflow.
6. If the sum equals the target, add the quadruplet to the answer, skip duplicate left and right values, and move both pointers inward.
7. If the sum is smaller than the target, move `left` forward to increase the sum. Otherwise, move `right` backward to decrease it.
8. Continue until all valid pairs have been checked.

## Complexity Analysis

Let `n` be the number of elements.

- **Time Complexity:** `O(n^3)` — sorting takes `O(n log n)`; the two fixed-index loops and two-pointer scan take `O(n^3)`.
- **Auxiliary Space Complexity:** `O(1)` excluding sorting implementation details and the output. The output space is not counted as auxiliary space.

## Important Detail

Using `1LL` before adding the four values promotes the sum to `long long`, preventing overflow when the values are large. Duplicate skipping ensures that each unique quadruplet is added only once.
