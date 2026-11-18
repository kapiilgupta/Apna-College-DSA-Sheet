# 5. Container With Most Water

- **Platform:** LeetCode
- **Problem:** [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- **DSA Sheet:** Array (Part 2), Problem 5
- **Difficulty:** Medium

## Approach: Two Pointers (Greedy)

1. Initialize two pointers: `i) at the beginning and `j) at the end of the array.
2. The width of the container is `j - i), and its height is limited by the shorter of the two lines: `min(nums[i], nums[j])).
3. Calculate the current area and update the maximum answer.
4. Move the pointer pointing to the shorter line inward. Keeping that shorter line cannot produce a larger area with a smaller width, so it is the only pointer worth moving.
5. Repeat until the two pointers meet.

## Complexity Analysis

Let `n` be the number of heights.

- **Time Complexity:** `O(n)` — each pointer moves inward at most `n - 1` times in total.
- **Auxiliary Space Complexity:** `O(1)` — only a constant number of variables are used.

## Important Detail

The area is calculated as:

`area = min(height[left], height[right]) * (right - left)`

The two-pointer strategy avoids checking every possible pair, reducing the brute-force `O(n^2)` solution to `O(n)`.
