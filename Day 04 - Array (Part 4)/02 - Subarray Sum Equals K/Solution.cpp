#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int ans = 0;

        int curr = 0;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            int target = curr - k;
            if (m.find(target) != m.end()) ans += m[target];

            m[curr]++;
        }

        return ans;
    }

    // Brute force using O(n^2)
    // int subarraySum(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     int ans = 0;
    //
    //     for (int i = 0; i < n; i++) {
    //         long long sum = 0;
    //         for (int j = i; j < n; j++) {
    //             sum += nums[j];
    //             if (sum == k) ans++;
    //         }
    //     }
    //
    //     return ans;
    // }
};
