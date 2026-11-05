#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, vector<int>& ans, int i) {
        if (vis[i]) return;

        vis[i] = true;
        ans.push_back(i);

        for (auto& p : adj[i]) {
            dfs(adj, vis, ans, p);
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> ans;
        vector<int> vis(n + 1, false);

        dfs(adj, vis, ans, 0);
        return ans;
    }
};
