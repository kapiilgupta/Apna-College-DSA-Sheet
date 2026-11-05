#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<vector<int>>& adj, int& ans, int& n) {
        queue<int> q;
        vector<bool> vis(n + 1, false);
        vis[0] = true;

        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                ans++;
                q.push(i);
                vis[i] = true;

                while (!q.empty()) {
                    int c = q.front();
                    q.pop();

                    for (int& ng : adj[c]) {
                        if (vis[ng]) continue;
                        q.push(ng);
                        vis[ng] = true;
                    }
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> adj(n + 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) adj[i + 1].push_back(j + 1);
            }
        }

        int ans = 0;
        helper(adj, ans, n);
        return ans;
    }
};
