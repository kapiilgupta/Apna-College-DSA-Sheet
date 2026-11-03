# 287. Find the Duplicate Number

- **DSA Sheet:** Apna College
- **Day:** 4 — Array (Part 4)
- **Question:** 3
- **LeetCode:** [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

## Approach: Floyd's Tortoise and Hare (Cycle Detection)

Treat each array value as the next index in a linked structure. Since the array contains `n + 1` integers and every value is in the range `[1, n]`, at least one value is repeated, which creates a cycle.

1. **Detect the cycle:** Move `slow` one step (`nums[slow]`) and `fast` two steps (`nums[nums[fast]]`) until they meet.
2. **Find the cycle entrance:** Reset `slow` to index `0`. Move both pointers one step at a time. Their next meeting point is the duplicate number.

## Complexity

- **Time:** `O(n)` — each pointer traverses at most a linear number of elements.
- **Space:** `O(1)` — only two pointers are used.

## Solution

See [Solution.cpp](./Solution.cpp).
