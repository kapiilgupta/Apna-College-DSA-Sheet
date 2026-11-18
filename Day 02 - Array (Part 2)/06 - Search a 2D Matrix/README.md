# 6. Search a 2D Matrix

- **Platform:** LeetCode
- **Problem:** [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
- **DSA Sheet:** Array (Part 2), Problem 6
- **Difficulty:** Medium

## Approach: Binary Search on a Virtual 1D Array

The matrix has the property that each row is sorted and the first element of each row is greater than the last element of the previous row. Therefore, the matrix can be treated as one sorted 1D array without actually converting it.

1. Let `n` be the number of rows and `m` the number of columns.
2. Apply binary search over the virtual index range `0` to `n * m - 1`.
3. Convert each 1D midpoint index into matrix coordinates:
   - Row: `mid / m`
   - Column: `mid % m`
4. Compare `matrix[r][c]` with the target.
5. If equal, return `true). If the matrix value is larger, search the left half; otherwise, search the right half.
6. If the search range becomes empty, return `false`.

## Complexity Analysis

Let `n` be the number of rows and `m` the number of columns.

- **Time Complexity:** `O(log(n * m))) — binary search is performed over all `n * m` elements.
- **Auxiliary Space Complexity:** `O(1)` — the search uses only a constant number of variables.

## Important Detail

The coordinate conversion lets us perform binary search directly on the matrix, using its sorted ordering without allocating an additional array.
