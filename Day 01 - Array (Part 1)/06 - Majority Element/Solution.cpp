#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int idx = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (ans == nums[i]) idx++;
            else idx--;

            if (idx == 0) {
                idx = 1;
                ans = nums[i];
            }
        }
        return ans;
    }
};
