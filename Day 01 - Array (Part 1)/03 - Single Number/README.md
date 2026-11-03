# 136. Single Number

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 3
- **LeetCode:** [136. Single Number](https://leetcode.com/problems/single-number/description/)

## Approach: Bit Manipulation (XOR)

Use the properties of the XOR operation:

- `a ^ a = 0`: equal numbers cancel each other out.
- `a ^ 0 = a`: XOR with zero leaves the number unchanged.
- XOR is commutative and associative, so the order of operations does not matter.

Since every number appears twice except one, XOR-ing all elements cancels every pair and leaves only the single number.

## Complexity

- **Time:** `O(n)` — traverse the array once.
- **Space:** `O(1)` — only one variable is used.

## Solution

See [Solution.cpp](./Solution.cpp).
