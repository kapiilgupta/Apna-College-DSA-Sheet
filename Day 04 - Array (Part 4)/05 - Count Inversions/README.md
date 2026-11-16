# 5. Count Inversions

- **Platform:** HackerRank
- **Problem:** [Merge Sort: Counting Inversions](https://www.hackerrank.com/challenges/ctci-merge-sort/problem)
- **DSA Sheet:** Array (Part 4), Problem 5

## Problem Overview

An inversion is a pair of indices `(i, j)` such that `i < j` and `arr[i] > arr[j]`. The task is to count all such pairs in the array.

## Approach 1: Brute Force

1. Traverse every element using index `i`.
2. For each `i`, check every element to its right using index `j).
3. If `arr[i] > arr[j]`, increment the inversion count.
4. Return the total count.

### Complexity Analysis

- **Time Complexity:** `O(n^2)` — every possible pair is checked.
- **Auxiliary Space Complexity:** `O(1)` — only a counter and loop variables are used.

## Approach 2: Optimized — Merge Sort

The optimized solution uses the divide-and-conquer technique of Merge Sort.

1. Divide the array into two halves recursively.
2. Count inversions in the left half.
3. Count inversions in the right half.
4. During the merge step, count cross-inversions between the two sorted halves.
5. If `nums[i] <= nums[j]`, copy the left element.
6. Otherwise, `nums[j]` is smaller than `nums[i]` and every remaining element in the left half. Add `mid - i + 1` to the inversion count, then copy `nums[j]`.
7. Merge the remaining elements and copy the merged segment back.

The key observation is that both halves are already sorted. Therefore, when a right-side element is smaller than the current left-side element, it forms an inversion with all remaining elements in the left half.

### Complexity Analysis

- **Time Complexity:** `O(n log n)` — Merge Sort performs `O(log n)` levels, processing `O(n)` elements at each level.
- **Auxiliary Space Complexity:** `O(n)` — temporary arrays used during merging, plus the recursion stack.

## Implementation

The active implementation uses Merge Sort. The brute-force implementation is retained in comments inside `Solution.cpp).
