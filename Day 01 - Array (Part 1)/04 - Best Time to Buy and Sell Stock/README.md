# 121. Best Time to Buy and Sell Stock

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 4
- **LeetCode:** [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Approach: Greedy (Minimum Price So Far)

Track the lowest stock price seen so far and calculate the profit that would be made by selling at each current price.

1. Initialize `buy` with the first day's price and `ans` with zero.
2. Traverse the prices from the second day onward.
3. If the current price is greater than `buy`, calculate the profit and update the maximum profit.
4. Otherwise, update `buy` because the current price is a better buying opportunity.
5. Return the maximum profit. If no profitable transaction is possible, the answer remains zero.

This ensures the buying day always comes before the selling day.

## Complexity

- **Time:** `O(n)` — one traversal of the prices.
- **Space:** `O(1)` — only a few variables are used.

## Solution

See [Solution.cpp](./Solution.cpp).
