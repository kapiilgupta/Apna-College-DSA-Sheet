# 02 - DFS Traversal of Graph

- **Day:** 25 - Graph (Part 1)
- **Question:** 2
- **Platform:** GeeksforGeeks
- **Problem:** [Depth First Traversal for a Graph](https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1)

## Approach: Recursive Depth-First Search (DFS)

Use recursion to explore the graph by going as deep as possible along each path before backtracking.

1. Start the traversal from vertex 0.
2. If the current vertex is already visited, return.
3. Mark the current vertex as visited and add it to the answer.
4. Recursively call DFS for each adjacent vertex.
5. Return the traversal result after the recursive calls finish.

The visited array prevents revisiting vertices and getting stuck in cycles.

## Complexity Analysis

Let \(V\) be the number of vertices and \(E\) the number of edges.

- **Time Complexity:** \(O(V + E)\) — each reachable vertex is visited once and its adjacency list is explored once.
- **Auxiliary Space Complexity:** \(O(V)\) — visited array and recursion stack in the worst case.

## Note

This implementation starts DFS from vertex 0 and visits only vertices reachable from it, matching the problem's traversal setup.

## Code

See [Solution.cpp](./Solution.cpp).
