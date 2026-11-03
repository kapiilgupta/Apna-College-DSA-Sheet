# 02 - Sort Colors

- **Day:** 02 - Array (Part 2)
- **Question:** 2
- **Platform:** LeetCode
- **Problem:** [75. Sort Colors](https://leetcode.com/problems/sort-colors/)

## Approach 1: Counting (Brute Force)

Count the occurrences of 0, 1, and 2, then overwrite the array in that order.

- **Time Complexity:** \(O(n)\)
- **Auxiliary Space Complexity:** \(O(1)\)

## Approach 2: Dutch National Flag Algorithm (Optimized)

Use three pointers to partition the array into three regions:

- `z`: next position for 0.
- `i`: current element being examined.
- `t`: next position for 2.

While `i <= t`:

1. If `nums[i] == 0`, swap it with `nums[z]`, then increment both `i` and `z`.
2. If `nums[i] == 2`, swap it with `nums[t]`, then decrement `t`. Do not increment `i`, because the swapped-in element has not been examined yet.
3. If `nums[i] == 1`, it is already in the correct middle region, so increment `i`.

This sorts the array in-place using constant extra space.

- **Time Complexity:** \(O(n)\) — each element is processed a constant number of times.
- **Auxiliary Space Complexity:** \(O(1)\) — sorting is done in-place.

## Code

See [Solution.cpp](./Solution.cpp).
