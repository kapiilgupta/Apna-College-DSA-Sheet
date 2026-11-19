# 2. Sliding Window Maximum

- **Platform:** LeetCode
- **Problem:** [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)
- **Topic:** Array, Sliding Window, Monotonic Deque, Heap
- **Sheet:** Array (Part 5)
- **Question:** 2

Given an array and a window size `k`, return the maximum value in every contiguous window of size `k`.

This solution includes all three approaches below.

## Approach 1: Brute Force (Nested Loops)

For every valid window starting at index `i`, scan its `k` elements and track the maximum. Store that maximum in the answer.

- **Time Complexity:** O((n-k+1) * k), often described as O(nk). In the worst case where k is proportional to n, this becomes O(n²).
- **Auxiliary Space:** O(1) extra space (excluding the output vector).

## Approach 2: Priority Queue (Max Heap)

Maintain a max heap of pairs `{value, index}`. For each new element, push it into the heap. Before recording a window maximum, discard heap-top entries whose indices are outside the current window. The largest valid element at the heap top is the window maximum.

- **Time Complexity:** O(n log n) — each insertion is O(log n); lazy removal can also pop elements, each at most once.
- **Auxiliary Space:** O(n) — the heap can retain stale entries until they reach its top, so it may grow to O(n).

## Approach 3: Monotonic Deque (Optimal)

The deque stores indices in decreasing order of their corresponding values, with the front representing the current window's maximum.

For each index `i`:

1. Remove indices from the front that are no longer in the current window (`index <= i-k`).
2. Remove indices from the back while their values are smaller than the current value. These indices can never be maximum for any future window that includes the current element.
3. Add `i` to the back.
4. Once the first full window is formed (`i >= k-1`), append the value at the deque front to the result.

- **Time Complexity:** O(n) — every index is pushed and popped at most once.
- **Auxiliary Space:** O(k) — the deque contains indices for the active window (at most k indices).

## Complexity Comparison

| Approach | Time Complexity | Auxiliary Space |
|---|---|---|
| Brute force | O(nk), worst-case O(n²) | O(1) |
| Priority queue (max heap) | O(n log n) | O(n) |
| Monotonic deque | O(n) | O(k) |

## Solution

See [Solution.cpp](./Solution.cpp).
