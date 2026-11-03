#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int m = v.size(), n = v[0].size();
        int i = 0, j = n - 1;

        while (i < m && j >= 0) {
            if (v[i][j] == target) return true;
            else if (v[i][j] > target) j--;
            else i++;
        }

        return false;
    }
};
