# 4. Merge Intervals

- **Platform:** LeetCode
- **Problem:** [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)
- **DSA Sheet:** Array (Part 3), Problem 4
- **Difficulty:** Medium

## Approach: Sorting + Greedy Merging

1. Sort the intervals by their starting points. This places intervals that may overlap next to each other.
2. Initialize the answer with the first interval.
3. Iterate through the remaining intervals:
   - If the current interval starts before or exactly when the last interval in the answer ends, the intervals overlap. Merge them by updating the last interval's end to the maximum of the two end points.
   - Otherwise, append the current interval as a separate interval.
4. Return the merged intervals.

Sorting ensures that once an interval does not overlap with the last merged interval, it cannot overlap with any earlier interval in the answer.

## Complexity Analysis

Let `n` be the number of intervals.

- **Time Complexity:** `O(n log n)` — sorting takes `O(n log n)`, and the single pass to merge intervals takes `O(n)`.
- **Auxiliary Space Complexity:** `O(n)` for the output vector in the worst case. The sorting implementation may also use additional stack space.

## Important Detail

The condition `ans.back()[1] >= nums[i][0]` treats intervals that touch at an endpoint as overlapping, as required by the problem. The merge updates the ending point using the maximum of both ending points.
