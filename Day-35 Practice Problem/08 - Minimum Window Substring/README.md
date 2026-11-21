# 8. Minimum Window Substring

- **Platform:** LeetCode
- **Problem:** [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
- **Topic:** Strings, Sliding Window, Hash Map
- **Folder:** Day-35 Practice Problem
- **Question:** 8

## Approach: Sliding Window + Frequency Map

Find the shortest substring of `s` that contains all characters of `t`, including duplicate character requirements.

1. Create a frequency map of characters in `t`.
2. Set `count` to the number of characters still needed (including duplicates).
3. Expand the window with pointer `j`. If the character is still required (`m[s[j]] > 0`), decrement `count`. Then decrement its frequency in the map.
4. Once `count == 0`, the window is valid. Record it if it is the smallest window found so far.
5. Shrink the window from the left by restoring the outgoing character's frequency. If it becomes required again, increment `count`. Continue shrinking until the window is invalid.

Negative map counts indicate extra occurrences of a character inside the current window, which allows duplicates to be handled correctly.

## Complexity Analysis

- **Time Complexity:** O(|s| + |t|) average — each pointer moves forward at most once through `s`, and hash-map operations are average O(1).
- **Auxiliary Space:** O(alphabet) — the frequency map stores character counts.

## Solution

See [Solution.cpp](./Solution.cpp).
