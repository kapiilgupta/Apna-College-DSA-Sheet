# 02 - Find the Degree of Each Vertex

- **Collection:** Day-35 Practice Problem (Extra Practice)
- **Question:** 2
- **Platform:** LeetCode
- **Problem:** [3898. Find the Degree of Each Vertex](https://leetcode.com/problems/find-the-degree-of-each-vertex/)

## Approach: Count Adjacent Vertices

The graph is represented by an adjacency matrix. Each row represents a vertex, and an entry of 1 indicates an edge from that vertex to the corresponding column vertex.

1. Create an answer array with one entry per vertex, initialized to zero.
2. Traverse every row of the matrix.
3. Count the entries equal to 1 in that row.
4. Store the count as the degree of that vertex.
5. Return the answer array.

## Complexity Analysis

- **Time Complexity:** O(V^2) — every entry of the V × V adjacency matrix is checked.
- **Auxiliary Space Complexity:** O(V) — the answer array uses one value per vertex.

## Code

See [Solution.cpp](./Solution.cpp).
