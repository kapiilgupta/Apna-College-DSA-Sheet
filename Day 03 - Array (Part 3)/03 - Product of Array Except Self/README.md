# 3. Product of Array Except Self

- **Platform:** LeetCode
- **Problem:** [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- **DSA Sheet:** Array (Part 3), Problem 3
- **Difficulty:** Medium

## Approach: Prefix and Suffix Products

The solution builds two auxiliary arrays:
- `pre[i]` stores the product of all elements from index `0` through `i`.
- `suf[i]` stores the product of all elements from index `i` through the last index.

For each index, the product of all elements except the current one is the prefix product before it multiplied by the suffix product after it.

1. Build the prefix product array from left to right.
2. Build the suffix product array from right to left.
3. For the first index, use `suf[1]), since there are no elements to its left.
4. For the last index, use `pre[n - 2]), since there are no elements to its right.
5. For every middle index, calculate `pre[i - 1] * suf[i + 1]).

This approach does not use division and correctly handles arrays containing zeroes.

## Complexity Analysis

Let `n` be the number of elements.

- **Time Complexity:** `O(n)` — prefix construction, suffix construction, and answer construction each take linear time.
- **Auxiliary Space Complexity:** `O(n)` — the prefix and suffix arrays each store `n` products. The returned answer array is not counted as auxiliary space.

## Note

The implementation follows the problem's constraint that the array contains at least two elements.
