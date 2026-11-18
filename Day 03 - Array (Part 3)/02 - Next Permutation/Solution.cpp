class Solution {
public:
    void reverse(vector<int> &nums, int i, int j){
        while(i < j){
            swap(nums[i++], nums[j--]);
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int mxIdx = -1;
        for(int i = n - 2; i >= 0; i--){
            if(nums[i + 1] > nums[i]){
                mxIdx = i;
                break;
            }
        }

        if(mxIdx == -1) reverse(nums, 0, n - 1);
        else {
            for(int i = n - 1; i > mxIdx; i--){
                if(nums[i] > nums[mxIdx]){
                    swap(nums[mxIdx], nums[i]);
                    break;
                }
            }

            reverse(nums, mxIdx + 1, n - 1);
        }
    }
};