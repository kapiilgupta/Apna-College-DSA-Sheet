# 4. Reverse Pairs

- **Platform:** LeetCode
- **Problem:** [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)
- **Topic:** Array, Divide and Conquer, Merge Sort
- **Sheet:** Array (Part 5)
- **Question:** 4

A reverse pair is a pair of indices (i, j) such that i < j and nums[i] > 2 * nums[j].

## Approach 1: Brute Force

Check every pair (i, j) with i < j. If nums[i] > 2 * nums[j], increment the count.

- **Time Complexity:** O(n²), as every pair is checked.
- **Auxiliary Space:** O(1), apart from the output/count.

## Approach 2: Modified Merge Sort

Use divide and conquer to count reverse pairs efficiently:

1. Split the array into two halves and recursively count reverse pairs within each half.
2. Both halves become sorted after recursive calls.
3. Count cross-half reverse pairs: for each element in the left half, move a pointer through the sorted right half while nums[i] > 2 * nums[j]. Since both halves are sorted, the pointer only moves forward, and the number of valid right-side elements for the current left element is added to the count.
4. Merge the two sorted halves back into the original array.

The merge sort structure ensures that each level processes the array in linear time, across O(log n) levels.

- **Time Complexity:** O(n log n)
- **Auxiliary Space:** O(n) for the temporary merge vector, plus O(log n) recursion stack.

## Complexity Comparison

| Approach | Time | Auxiliary Space |
|---|---|---|
| Brute force | O(n²) | O(1) |
| Modified merge sort | O(n log n) | O(n) + O(log n) recursion |

## Solution

See [Solution.cpp](./Solution.cpp).
