# 01 - Connected Components in an Undirected Graph

- **Collection:** Day-35 Practice Problem (Extra Practice)
- **Question:** 1
- **Platform:** GeeksforGeeks
- **Problem:** [Connected Components in an Undirected Graph](https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1)

## Approach: BFS

First, build an adjacency list from the undirected edge list. Since every edge connects two vertices in both directions, add each endpoint to the other's adjacency list.

Then iterate through every vertex:

1. If a vertex is already visited, skip it.
2. Otherwise, start a BFS from that vertex using a queue and mark it visited.
3. Visit all reachable, unvisited neighbours and add them to the queue.
4. Collect each removed vertex in the current component.
5. Once the queue is empty, add that component to the answer.

Repeating this process for every unvisited vertex finds all connected components, including isolated vertices.

## Complexity Analysis

Let \(V\) be the number of vertices and \(E\) the number of edges.

- **Time Complexity:** \(O(V + E)\) — building the adjacency list and traversing all vertices and edges.
- **Auxiliary Space Complexity:** \(O(V + E)\) — adjacency list, visited array, queue, and component storage.

## Code

See [Solution.cpp](./Solution.cpp).
