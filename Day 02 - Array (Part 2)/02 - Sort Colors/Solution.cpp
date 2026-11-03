#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Brute force
        // int z = 0, o = 0, t = 0;
        // for (int &i : nums) {
        //     if (i == 0) z++;
        //     else if (i == 1) o++;
        //     else t++;
        // }

        // for (int i = 0; i < nums.size(); i++) {
        //     if (z) {
        //         nums[i] = 0;
        //         z--;
        //     } else if (o) {
        //         nums[i] = 1;
        //         o--;
        //     } else {
        //         nums[i] = 2;
        //         t--;
        //     }
        // }

        // Optimized: Dutch National Flag algorithm
        int n = nums.size();
        int z = 0, t = n - 1, i = 0;

        while (i <= t) {
            if (nums[i] == 0) {
                swap(nums[i++], nums[z++]);
            } else if (nums[i] == 2) {
                swap(nums[i], nums[t--]);
            } else {
                i++;
            }
        }
    }
};
