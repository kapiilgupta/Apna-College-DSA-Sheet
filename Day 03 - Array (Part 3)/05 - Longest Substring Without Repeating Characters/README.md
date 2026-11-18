# 3. Longest Substring Without Repeating Characters

- **Platform:** LeetCode
- **Problem:** [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- **Topic:** Array / String, Sliding Window, Hash Set
- **Day:** 03 – Array (Part 3)
- **Question:** 5

## Approach: Sliding Window + Unordered Set

Use two pointers to maintain a window containing only unique characters.

1. Expand the window by moving `i` through the string.
2. If the current character is already present in the set, repeatedly erase the character at `j` and advance `j` until the duplicate is removed.
3. Insert the current character into the set.
4. Update the maximum window length using `i - j + 1`.

The set stores the characters currently inside the window, ensuring that every maintained window has no repeated characters.

## Complexity Analysis

- **Time Complexity:** `O(n)` – Each character is inserted into and removed from the set at most once.
- **Auxiliary Space:** `O(min(n, charset))` – The set stores at most the distinct characters in the current window.

## Solution

See [Solution.cpp](./Solution.cpp).
