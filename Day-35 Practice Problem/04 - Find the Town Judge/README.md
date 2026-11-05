# 04 - Find the Town Judge

- **Collection:** Day-35 Practice Problem (Extra Practice)
- **Question:** 4
- **Platform:** LeetCode
- **Problem:** [997. Find the Town Judge](https://leetcode.com/problems/find-the-town-judge/)

## Approach 1: Brute Force (Adjacency List and Trust Count)

Build an adjacency list where each person points to the people they trust. Maintain a count of how many people trust each person.

1. Build the adjacency list from the trust pairs.
2. For each person, check whether they trust nobody. Such a person is a possible judge.
3. The judge must also be trusted by exactly \(n-1\) other people.
4. Return the person satisfying both conditions; otherwise, return -1.

The submitted brute-force implementation uses an adjacency list to identify people who trust nobody and a separate count array to track incoming trust.

- **Time Complexity:** \(O(n + T)\) — building and scanning the adjacency list and trust counts.
- **Auxiliary Space Complexity:** \(O(n + T)\) — adjacency list, count array, and candidate set, where \(T\) is the number of trust pairs.

## Approach 2: Optimized (Net Trust Score)

Use one array to calculate each person's net trust score.

1. For every trust pair \([a,b]\), decrement the score of \(a\), because person \(a\) trusts someone.
2. Increment the score of \(b\), because person \(b\) is trusted by someone.
3. A town judge is trusted by everyone else and trusts nobody, so their score must be exactly \(n-1\).
4. Scan the scores and return the person with that value. If no such person exists, return -1.

- **Time Complexity:** \(O(n + T)\) — process all trust pairs once and scan the people once.
- **Auxiliary Space Complexity:** \(O(n)\) — one score array of size \(n+1\).

## Code

The optimized implementation is active. The brute-force implementation is preserved in comments in [Solution.cpp](./Solution.cpp).
