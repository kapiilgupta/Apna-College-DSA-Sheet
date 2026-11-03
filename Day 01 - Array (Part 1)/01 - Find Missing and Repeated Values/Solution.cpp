#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int miss = 0, repe = 0;

        int n = grid.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = abs(grid[i][j]);
                int r = (val - 1) / n;
                int c = (val - 1) % n;

                if (grid[r][c] < 0) repe = val;
                else grid[r][c] = -grid[r][c];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    miss = i * n + j + 1;
                    break;
                }
            }
        }

        repe = +repe;
        return {repe, miss};
    }
};
