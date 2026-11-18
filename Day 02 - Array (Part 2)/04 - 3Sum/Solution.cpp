class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;
        for(int j = 0; j < n - 2; j++){
            if (j > 0 && nums[j] == nums[j - 1]) continue; // Duplicate skipping condition

            int left = j + 1, right = n - 1;
            while(left < right){
                int curr = nums[right] + nums[j] + nums[left];
                if(curr == 0){
                    ans.push_back({nums[j], nums[left], nums[right]});

                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
                else if(curr > 0) right--;
                else left++;
            }
        }

        return ans;
    }
};