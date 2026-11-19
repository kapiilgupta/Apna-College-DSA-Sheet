class Solution {
public:
    //Optimal without using extra space (Two pointer)
    int trap(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n-1, ans = 0;
        int leftMx = 0, rightMx = 0;

        while(i < j){
            leftMx = max(leftMx, nums[i]);
            rightMx = max(rightMx, nums[j]);

            if(nums[i] < nums[j]) ans += (leftMx - nums[i++]);
            else ans += (rightMx - nums[j--]);
        }

        return ans;
    }

    //Optimal but using extra space
    // int trap(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> left(n, 0), right(n, 0);
    //
    //     left[0] = nums[0]; right[n-1] = nums[n-1];
    //     for(int i = 1 ; i < n ; i++)   left[i] = max(left[i-1], nums[i]);
    //     for(int i = n-2; i >= 0 ; i--) right[i] = max(right[i+1], nums[i]);
    //
    //     int ans = 0;
    //     for(int i = 0 ; i < n ; i++){
    //             ans += (min(left[i], right[i]) - nums[i]);
    //     }
    //     return ans;
    // }
};