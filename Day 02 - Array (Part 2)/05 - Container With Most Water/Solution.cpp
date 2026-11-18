class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = 0;
        int i = 0, j = nums.size() - 1;
        while(i < j){
            int currArea = (min(nums[i], nums[j])) * (j - i);
            ans = max(currArea, ans);

            if(nums[i] < nums[j]) i++;
            else j--;
        }
        return ans;
    }
};