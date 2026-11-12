# 02 - Find the Pivot Integer

- **Collection:** Day-36 Maths Quest
- **Question:** 2
- **Quest:** [LeetCode Maths Quest](https://leetcode.com/quest/maths-quest/)
- **Problem:** [2485. Find the Pivot Integer](https://leetcode.com/problems/find-the-pivot-integer/)

## Problem Idea

Find an integer \(x\) such that the sum from 1 to \(x\) equals the sum from \(x\) to \(n\), including \(x\) in both sums. Return -1 if no such integer exists. [LeetCode problem statement](https://leetcode.com/problems/find-the-pivot-integer/). <Cite refs={["turn908823search0"]}/>

## Approach 1: Brute Force (Running Sums)

Start with the sum of all integers from 1 to \(n\) in `sum`, and build the right-to-left running sum in `curr`.

1. Iterate from \(n\) down to 1.
2. Add the current value \(i\) to `curr`.
3. Compare `curr` with `sum`. If they are equal, \(i\) is the pivot integer.
4. Otherwise, subtract \(i\) from `sum` and continue.
5. If no matching point is found, return -1.

- **Time Complexity:** \(O(n)\) — one pass through the integers.
- **Auxiliary Space Complexity:** \(O(1)\) — only a constant number of variables are used.

## Approach 2: Optimized (Mathematical Formula)

The sum of integers from 1 to \(n\) is:

\[
S = \frac{n(n+1)}{2}
\]

For a pivot integer \(x\), the left and right sums are equal:

\[
1+2+\cdots+x = x+(x+1)+\cdots+n
\]

Rearranging this equality gives:

\[
x^2 = \frac{n(n+1)}{2} = S
\]

Therefore, a pivot exists only when \(S\) is a perfect square.

1. Calculate \(S = n(n+1)/2\).
2. Calculate \(r = \lfloor\sqrt{S}\rfloor\).
3. If \(r^2 = S\), return \(r\); otherwise return -1.

- **Time Complexity:** \(O(1)\) — a fixed number of arithmetic and square-root operations.
- **Auxiliary Space Complexity:** \(O(1)\) — only scalar variables are used.

## Code

The optimized mathematical approach is active in [Solution.cpp](./Solution.cpp). The brute-force approach is preserved in comments for reference.

## Example

For \(n=8\), the total sum is \(8\times9/2=36\). Since \(\sqrt{36}=6\), the pivot integer is 6:

\[
1+2+3+4+5+6 = 6+7+8 = 21
\]
