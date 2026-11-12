# 3. Palindrome Number

- **Platform:** LeetCode
- **Problem:** [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)
- **Difficulty:** Easy

## Approach: Reverse the Number

1. If `x` is negative, return `false`, because a minus sign cannot be mirrored.
2. Store the original number in `x` and use a temporary variable `t` to process its digits.
3. Build the reversed number digit by digit using `n = n * 10 + (t % 10)`.
4. Remove the last digit from `t) using integer division by 10.
5. Compare the reversed number with the original number. If they are equal, the number is a palindrome.

The reversed value is stored in `long long` to avoid integer overflow during reversal.

## Complexity Analysis

Let `d` be the number of digits in `x`.

- **Time Complexity:** `O(d)` — each digit is processed once, which is `O(log10(x))` for positive `x).
- **Auxiliary Space Complexity:** `O(1)` — only a constant number of variables are used.
