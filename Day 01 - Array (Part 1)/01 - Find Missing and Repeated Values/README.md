# 2965. Find Missing and Repeated Values

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 1
- **LeetCode:** [2965. Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/description/)

## Approach: In-place Index Marking

The grid contains values from `1` to `n × n`, with one value repeated and one value missing. Use each value to map to its corresponding grid position, then mark that position by negating it.

1. For each cell, take the absolute value so previously negated values are read correctly.
2. Convert the value to its corresponding row and column:
   - `r = (val - 1) / n`
   - `c = (val - 1) % n`
3. If the mapped cell is already negative, the value has appeared before and is the repeated value.
4. Otherwise, negate the mapped cell to mark that value as visited.
5. Scan the grid for a positive cell. Its corresponding number is the missing value.

The returned vector follows the required order: `{repeated, missing}`.

## Complexity

- **Time:** `O(n²)` — the grid is traversed a constant number of times.
- **Space:** `O(1)` auxiliary space — marking is performed directly in the input grid.

## Note

This approach modifies the input grid in place.

## Solution

See [Solution.cpp](./Solution.cpp).
