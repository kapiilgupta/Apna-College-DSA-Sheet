# 50. Pow(x, n)

- **DSA Sheet:** Apna College
- **Day:** 1 — Array (Part 1)
- **Question:** 5
- **LeetCode:** [50. Pow(x, n)](https://leetcode.com/problems/powx-n/)

## Approach: Binary Exponentiation (Exponentiation by Squaring)

Calculate `x^n` efficiently by repeatedly squaring the base and halving the exponent.

1. If the exponent is negative, replace the base with its reciprocal (`1.0 / x`) and make the exponent positive.
2. Initialize the answer to `1.0`.
3. While the exponent is greater than zero:
   - If the exponent is odd, multiply the answer by the current base.
   - Square the base.
   - Divide the exponent by two.
4. Return the accumulated answer.

The helper accepts a `long long` exponent so negating `INT_MIN` is safe after the integer exponent is converted.

## Complexity

- **Time:** `O(log |n|)` — the exponent is halved on every iteration.
- **Space:** `O(1)` — the algorithm uses a constant amount of extra space.

## Solution

See [Solution.cpp](./Solution.cpp).
