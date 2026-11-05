# 05 - Number of Provinces

- **Collection:** Day-35 Practice Problem (Extra Practice)
- **Question:** 5
- **Platform:** LeetCode
- **Problem:** [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/)

## Approach: Convert Adjacency Matrix to Adjacency List + BFS

The input matrix represents an undirected graph. Each city is a vertex, and a value of 1 indicates a direct connection between two cities.

1. Build an adjacency list from the matrix, using 1-based vertex labels.
2. Create a visited array to keep track of cities already explored.
3. Iterate through every city. Whenever an unvisited city is found, increment the province count and start BFS from that city.
4. During BFS, mark each newly discovered neighbour as visited and add it to the queue.
5. Once BFS finishes, all cities in that connected component have been visited. Continue scanning for another unvisited city.
6. Return the total number of BFS starts, which equals the number of provinces.

## Complexity Analysis

Let \(n\) be the number of cities.

- **Time Complexity:** \(O(n^2)\) — building the adjacency list scans the entire \(n \times n\) matrix; BFS then traverses the graph.
- **Auxiliary Space Complexity:** \(O(n^2)\) — the adjacency list can store up to \(O(n^2)\) edges, while the visited array and queue use \(O(n)\) space.

## Code

See [Solution.cpp](./Solution.cpp).
