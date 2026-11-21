# 7. Product of Array Except Self

- **Platform:** LeetCode
- **Problem:** [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- **Topic:** Arrays, Prefix and Suffix Products
- **Folder:** Day-35 Practice Problem
- **Question:** 7

## Approach: Prefix and Suffix Products (O(1) Auxiliary Space)

The solution builds the result using running prefix and suffix products without creating separate prefix/suffix arrays.

1. Initialize `ans` with 1 for every index.
2. Maintain `pre` as the product of all elements to the left of the current index. Multiply it into `ans[i]`, then update `pre` with `nums[i]`.
3. In the same loop, traverse from the right using index `n-1-i). Multiply the running suffix product `suf` into that answer position, then update `suf` with the corresponding input value.
4. After both passes have been combined, each answer position contains the product of all elements except itself.

## Complexity Analysis

- **Time Complexity:** O(n) — one combined traversal computes prefix and suffix contributions.
- **Auxiliary Space:** O(1) — only a few scalar variables are used besides the output vector.

## Solution

See [Solution.cpp](./Solution.cpp).
