#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> ans;
        vector<bool> vis(n + 1, false);

        queue<int> q;
        q.push(0);
        vis[0] = true;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (auto& i : adj[curr]) {
                if (vis[i]) continue;
                vis[i] = true;
                q.push(i);
            }

            ans.push_back(curr);
        }

        return ans;
    }
};
