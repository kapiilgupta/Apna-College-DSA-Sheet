class Solution {
    int n;
public:
    void rightNextSmallest(vector<int> &nums, vector<int> &ans){
        stack<int> s;
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() && nums[s.top()] >= nums[i]) s.pop();

            if(!s.empty()) ans[i] = s.top();
            s.push(i);
        }
    }

    void leftNextSmallest(vector<int> &nums, vector<int> &ans){
        stack<int> s;
        for(int i = 0; i < nums.size(); i++){
            while(!s.empty() && nums[s.top()] >= nums[i]) s.pop();

            if(!s.empty()) ans[i] = s.top();
            s.push(i);
        }
    }

    int largestRectangleArea(vector<int>& nums) {
        n = nums.size();
        vector<int> nsl(n, -1), nsr(n, n);

        leftNextSmallest(nums, nsl);
        rightNextSmallest(nums, nsr);

        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            int ht = nums[i];
            int wd = nsr[i] - nsl[i] - 1;

            ans = max(ans, ht * wd);
        }

        return ans;
    }
};