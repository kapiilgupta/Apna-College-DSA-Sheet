# 01 - BFS Traversal of Graph

- **Day:** 25 - Graph (Part 1)
- **Question:** 1
- **Platform:** GeeksforGeeks
- **Problem:** [BFS Traversal of Graph](https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1)

## Approach: Breadth-First Search (BFS)

Use a queue to traverse the graph level by level, starting from vertex 0.

1. Mark vertex 0 as visited and push it into the queue.
2. While the queue is not empty, remove its front vertex.
3. Visit each unvisited adjacent vertex: mark it visited and push it into the queue.
4. Append the removed vertex to the traversal result.
5. Return the traversal.

Marking a vertex as visited when it is enqueued prevents it from being added to the queue multiple times.

## Complexity Analysis

Let \(V\) be the number of vertices and \(E\) the number of edges.

- **Time Complexity:** \(O(V + E)\) — each vertex is processed once and each adjacency-list entry is examined once.
- **Auxiliary Space Complexity:** \(O(V)\) — visited array, queue, and traversal result.

## Note

This implementation starts BFS from vertex 0 and visits the vertices reachable from it, as required by this problem's traversal setup.

## Code

See [Solution.cpp](./Solution.cpp).
