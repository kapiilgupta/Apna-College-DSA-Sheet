#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Optimized approach: trust score
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ans(n + 1);

        for (auto& t : trust) {
            ans[t[0]]--;
            ans[t[1]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (ans[i] == n - 1) return i;
        }

        return -1;
    }

    // Brute force approach
    // int findJudge(int n, vector<vector<int>>& trust) {
    //     if (trust.size() == 0 && n > 1) return -1;
    //
    //     vector<vector<int>> adj(n + 1);
    //     for (auto& e : trust) adj[e[0]].push_back(e[1]);
    //
    //     vector<int> vis(n + 1, 0);
    //     vis[0] = 0;
    //     unordered_set<int> s;
    //
    //     for (int i = 1; i <= n; i++) {
    //         if (adj[i].size() == 0) {
    //             if (vis[i] == i - 1) s.insert(i);
    //         } else {
    //             for (auto& e : adj[i]) vis[e]++;
    //         }
    //     }
    //
    //     for (int i = 1; i <= n; i++) {
    //         if (vis[i] == n - 1 && s.contains(i)) return i;
    //     }
    //
    //     return -1;
    // }
};
