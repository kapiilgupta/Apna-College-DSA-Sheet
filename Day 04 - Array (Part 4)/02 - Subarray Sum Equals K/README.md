# 560. Subarray Sum Equals K

- **DSA Sheet:** Apna College
- **Day:** 4 — Array (Part 4)
- **Question:** 2
- **LeetCode:** [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

## Approach: Prefix Sum + Hash Map

Maintain a running prefix sum `curr`. For each position, a previous prefix sum equal to `curr - k` means the elements between that previous position and the current position sum to `k`.

1. Initialize the frequency map with `m[0] = 1). This accounts for subarrays starting at index 0 whose sum is `k`.
2. Add the current element to the running prefix sum.
3. Look up `curr - k` in the map. Add its frequency to the answer because each occurrence represents a valid subarray ending at the current index.
4. Increment the frequency of the current prefix sum.

The hash map is important because the array may contain negative numbers, so a sliding-window approach is not generally valid.

## Complexity

- **Time:** `O(n)` expected — one pass through the array with average constant-time hash map operations.
- **Space:** `O(n)` — the map can store up to one prefix sum per element.

## Alternative: Brute Force

The commented-out solution checks every possible subarray by fixing its starting index and extending its ending index.

- **Time:** `O(n^2)`
- **Space:** `O(1)` auxiliary space.

## Solution

See [Solution.cpp](./Solution.cpp).
