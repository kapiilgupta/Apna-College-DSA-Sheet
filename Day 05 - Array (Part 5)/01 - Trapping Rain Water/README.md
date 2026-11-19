# 1. Trapping Rain Water

- **Platform:** LeetCode
- **Problem:** [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
- **Topic:** Arrays, Two Pointers, Prefix/Suffix Maximums
- **Sheet:** Array (Part 5)
- **Question:** 1

This solution contains two approaches: an optimal prefix/suffix maximum approach using extra arrays, and an optimal two-pointer approach that uses constant extra space.

## Approach 1: Prefix and Suffix Maximum Arrays (O(n) extra space)

For each index, the amount of water that can be trapped depends on the tallest bar to its left and the tallest bar to its right.

1. Build `left[i]`, the maximum height from index `0` through `i`.
2. Build `right[i]`, the maximum height from index `i` through `n-1`.
3. At each index, the water level is `min(left[i], right[i])).
4. Add `min(left[i], right[i]) - nums[i]` to the total.

**Time Complexity:** O(n) — the arrays are built and traversed in linear time.  
**Auxiliary Space:** O(n) — two arrays of length n.

## Approach 2: Two Pointers (O(1) extra space)

Maintain pointers `i` and `j` at the left and right ends, and track the maximum wall seen so far on each side (`leftMx` and `rightMx`).

1. Update the maximum heights seen from the left and right.
2. If `nums[i] < nums[j]`, process the left side: the left maximum is the limiting boundary, so the trapped water at `i` is `leftMx - nums[i]`. Then advance `i`.
3. Otherwise, process the right side: trapped water at `j` is `rightMx - nums[j]`. Then move `j` left.
4. Continue until the pointers meet.

This works because the side with the smaller current height is bounded by a wall at least as tall on the opposite side; the water contribution for that side can be finalized using its running maximum.

**Time Complexity:** O(n) — each pointer moves inward at most n times overall.  
**Auxiliary Space:** O(1) — only pointers, running maxima, and the total are used.

## Comparison

| Approach | Time | Auxiliary Space |
|---|---:|---:|
| Prefix/Suffix arrays | O(n) | O(n) |
| Two pointers | O(n) | O(1) |

## Solution

See [Solution.cpp](./Solution.cpp).
