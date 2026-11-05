#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (auto e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<vector<int>> ans;
        vector<bool> vis(V, false);
        queue<int> q;

        for (int j = 0; j < V; j++) {
            if (vis[j]) continue;

            q.push(j);
            vis[j] = true;
            vector<int> curr;

            while (!q.empty()) {
                int c = q.front();
                q.pop();

                for (auto& i : adj[c]) {
                    if (vis[i]) continue;
                    q.push(i);
                    vis[i] = true;
                }

                curr.push_back(c);
            }

            ans.push_back(curr);
        }

        return ans;
    }
};
