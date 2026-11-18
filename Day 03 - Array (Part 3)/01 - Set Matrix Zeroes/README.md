# 1. Set Matrix Zeroes

- **Platform:** LeetCode
- **Problem:** [73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
- **DSA Sheet:** Array (Part 3), Problem 1
- **Difficulty:** Medium

## Approach: In-Place Matrix Marking

This solution uses the first row and first column as marker arrays, avoiding an additional matrix.

1. First, check whether the original first row contains any zero and store the result in `firstC`.
2. Check whether the original first column contains any zero and store the result in `firstR`.
3. Traverse the remaining cells. Whenever a zero is found at `(i, j)`, mark its row by setting `vec[i][0]` to zero and its column by setting `vec[0][j]` to zero.
4. Traverse the inner matrix again. If the corresponding row marker or column marker is zero, set that cell to zero.
5. Finally, use the saved flags to zero out the first column and first row when required.

The first-row and first-column flags are stored separately because those locations are also being used as markers.

## Complexity Analysis

Let `n` be the number of rows and `m` the number of columns.

- **Time Complexity:** `O(n * m)` — the matrix is traversed a constant number of times.
- **Auxiliary Space Complexity:** `O(1)` — the solution modifies the matrix in place and uses only two boolean flags.

## Important Detail

The first row and first column are checked before writing markers. This preserves their original zero status and prevents marker updates from being confused with the initial matrix values.
