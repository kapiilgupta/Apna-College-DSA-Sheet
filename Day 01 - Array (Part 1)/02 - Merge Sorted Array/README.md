# 88. Merge Sorted Array

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 2
- **LeetCode:** [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Approach: Two Pointers (Merge from the End)

The first array has enough extra space at the end to hold all elements from the second array. Since both arrays are sorted, merge them backwards to avoid overwriting the elements in the first array that have not yet been processed.

1. Initialize `i` at the last valid element of `v1`, `j` at the last element of `v2`, and `k` at the last position of the combined array.
2. Compare `v1[i]` and `v2[j]`.
3. Place the larger value at `v1[k]`, then move the corresponding pointer and `k` one step backward.
4. If elements remain in `v2`, copy them into `v1`. Any remaining elements in `v1` are already in their correct positions.

## Complexity

- **Time:** `O(m + n)` — each element is processed at most once.
- **Space:** `O(1)` — the merge is performed in place.

## Solution

See [Solution.cpp](./Solution.cpp).
