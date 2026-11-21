# 6. Repeated Substring Pattern

- **Platform:** LeetCode
- **Problem:** [459. Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/)
- **Topic:** Strings, Pattern Matching
- **Folder:** Day-35 Practice Problem
- **Question:** 6

## Approach 1: String Concatenation Trick (Optimal)

Concatenate the string with itself: `a = s + s`. Remove the first and last characters from this combined string, then check whether the original string `s` is present in the remaining substring.

If `s` can be constructed by repeating a smaller substring, it will appear inside this trimmed doubled string. If it does not, the original string is not made by repeating a substring.

**Time Complexity:** O(n) average for string search (implementation-dependent; commonly treated as linear for this solution).  
**Auxiliary Space:** O(n) for the doubled string and substring.

## Approach 2: Brute Force (Commented)

Try every possible substring length from 1 through n/2, but only lengths that divide n evenly.

1. Take the prefix of length `i` as the candidate repeated pattern.
2. Build a string by appending this pattern `n/i` times.
3. Compare the constructed string with the original.
4. If they match, the pattern repeats; otherwise continue.

**Time Complexity:** O(n²) in the worst case due to constructing and comparing candidate repeated strings across lengths.  
**Auxiliary Space:** O(n) for the temporary constructed string.

## Complexity Comparison

| Approach | Time | Auxiliary Space |
|---|---|---|
| Concatenation trick | O(n) average (search implementation-dependent) | O(n) |
| Brute force | O(n²) worst-case | O(n) |

## Solution

See [Solution.cpp](./Solution.cpp).
