# 2. Next Permutation

- **Platform:** LeetCode
- **Problem:** [31. Next Permutation](https://leetcode.com/problems/next-permutation/)
- **DSA Sheet:** Array (Part 3), Problem 2
- **Difficulty:** Medium

## Approach: Find the Pivot, Swap, and Reverse

The next permutation is the next lexicographically greater arrangement. If no greater arrangement exists, the array must be rearranged into ascending order.

1. **Find the pivot:** Scan from right to left to find the first index `mxIdx` where `nums[mxIdx] < nums[mxIdx + 1]`. The suffix to its right is in non-increasing order.
2. **Handle the last permutation:** If no such index exists, the entire array is non-increasing. Reverse it to obtain the smallest permutation, then finish.
3. **Find the successor:** Scan from the right and find the first element greater than the pivot. This is the smallest value in the suffix that can replace the pivot while making the permutation larger.
4. **Swap:** Exchange the pivot with that successor.
5. **Reverse the suffix:** Reverse all elements after the pivot. The suffix becomes ascending, giving the smallest permutation greater than the original one.

## Complexity Analysis

Let `n` be the number of elements.

- **Time Complexity:** `O(n)` — finding the pivot, finding its successor, and reversing the suffix each take linear time.
- **Auxiliary Space Complexity:** `O(1)` — all operations are performed in place.

## Important Detail

The suffix after the pivot is in descending order. Reversing it after the swap produces the smallest possible suffix, which is what makes the result the immediate next permutation.
