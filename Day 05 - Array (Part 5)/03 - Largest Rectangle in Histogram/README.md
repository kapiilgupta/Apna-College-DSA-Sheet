# 3. Largest Rectangle in Histogram

- **Platform:** LeetCode
- **Problem:** [84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)
- **Topic:** Array, Stack, Monotonic Stack
- **Sheet:** Array (Part 5)
- **Question:** 3

## Approach: Next Smaller Element on Both Sides (Monotonic Stack)

The largest rectangle can be calculated by treating each bar as the rectangle's height. For every bar, find the nearest strictly smaller bar on the left and on the right. Those two boundaries determine the maximum width for which the current bar can be the minimum height.

### 1. Find Next Smaller to Left (NSL)

- Traverse from left to right with a stack of indices.
- Pop while the stack top's height is greater than or equal to the current bar.
- The remaining top is the nearest smaller bar to the left; if the stack is empty, the boundary is `-1`.
- Push the current index.

### 2. Find Next Smaller to Right (NSR)

- Traverse from right to left using the same monotonic-stack logic.
- The remaining top is the nearest smaller bar to the right; if none exists, use `n`.

### 3. Calculate the area for each bar

For each index `i`:

- Height: `nums[i]`
- Width: `nsr[i] - nsl[i] - 1`
- Area: `height * width`

Take the maximum area across all bars.

## Complexity Analysis

- **Time Complexity:** O(n) — both stack passes and the area pass are linear; each index is pushed and popped at most once in each stack pass.
- **Auxiliary Space:** O(n) — the NSL and NSR arrays and monotonic stacks use linear space.

## Solution

See [Solution.cpp](./Solution.cpp).
