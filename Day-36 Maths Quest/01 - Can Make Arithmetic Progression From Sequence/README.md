# 01 - Can Make Arithmetic Progression From Sequence

- **Collection:** Day-36 Maths Quest
- **Question:** 1
- **Quest:** [LeetCode Maths Quest](https://leetcode.com/quest/maths-quest/)
- **Problem:** [1502. Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/)

## Approach: Sorting

An arithmetic progression is a sequence in which the difference between every pair of consecutive elements is constant.

1. Sort the array in ascending order.
2. Calculate the common difference using the first two elements.
3. Traverse the sorted array and compare each adjacent difference with the common difference.
4. If any difference is different, return `false`.
5. If all adjacent differences match, return `true`.

Sorting puts the elements in the order needed to check whether they can form an arithmetic progression.

## Complexity Analysis

Let \(n\) be the number of elements in the array.

- **Time Complexity:** \(O(n\log n)\) — sorting takes \(O(n\log n)\), followed by a linear scan.
- **Auxiliary Space Complexity:** Depends on the sorting implementation; the solution uses \(O(1)\) additional variables apart from sorting's internal stack/storage.

## Code

See [Solution.cpp](./Solution.cpp).
