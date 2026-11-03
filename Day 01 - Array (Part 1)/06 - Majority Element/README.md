# 169. Majority Element

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 6
- **LeetCode:** [169. Majority Element](https://leetcode.com/problems/majority-element/)

## Approach: Boyer–Moore Voting Algorithm

The majority element appears more than `n / 2` times. Boyer–Moore Voting finds it using a candidate and a counter.

1. Initialize the candidate `ans` to the first element and the counter `idx` to 1.
2. Traverse the remaining elements:
   - If the current element equals the candidate, increment the counter.
   - Otherwise, decrement the counter.
3. When the counter reaches zero, choose the current element as the new candidate and reset the counter to 1.
4. Return the candidate.

Because a majority element is guaranteed to exist, it will remain the final candidate. If that guarantee were absent, a second pass would be needed to verify the candidate.

## Complexity

- **Time:** `O(n)` — one traversal of the array.
- **Space:** `O(1)` — only a candidate and a counter are maintained.

## Solution

See [Solution.cpp](./Solution.cpp).
