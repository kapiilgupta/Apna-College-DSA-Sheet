# 03 - Find Center of Star Graph

- **Collection:** Day-35 Practice Problem (Extra Practice)
- **Question:** 3
- **Platform:** LeetCode
- **Problem:** [1791. Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/)

## Approach: Compare the First Two Edges

In a star graph, the center vertex is connected to every other vertex. Therefore, the center must be the common endpoint of any two edges.

1. Compare the first endpoint of the first edge with both endpoints of the second edge.
2. If it matches either endpoint, return it as the center.
3. Otherwise, the other endpoint of the first edge is the center.

Only the first two edges are needed.

## Complexity Analysis

- **Time Complexity:** O(1) — only two edges are inspected.
- **Auxiliary Space Complexity:** O(1) — no additional data structure is used.

## Code

See [Solution.cpp](./Solution.cpp).
