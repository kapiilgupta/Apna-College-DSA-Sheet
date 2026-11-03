#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy = nums[0], sell = 0;
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > buy) {
                ans = max(ans, nums[i] - buy);
            } else {
                buy = nums[i];
            }
        }

        return ans;
    }
};
