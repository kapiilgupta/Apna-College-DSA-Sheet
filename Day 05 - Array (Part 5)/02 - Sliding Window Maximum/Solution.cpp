class Solution {
public:
    //Most optimal using monotonic dque having TC - O(N)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return {};
        if(k == 1) return nums;

        deque<int> dq;
        vector<int> result;

        for(int i = 0; i<n; i++) {
            while(!dq.empty() && dq.front() <= i-k)dq.pop_front();
            while(!dq.empty() && nums[i] > nums[dq.back()])dq.pop_back();

            dq.push_back(i);
            if(i >= k-1)result.push_back(nums[dq.front()]);
        }
        return result;
    }

    // //Optimal, using priority queue having TC - O(N * log N)
    // vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //     priority_queue<pair<int, int>> pq;
    //     vector<int> ans;

    //     for (int i = 0; i < nums.size(); i++) {
    //         pq.push({nums[i], i});
    //         while(pq.size() >= k && pq.top().second < i-k+1) pq.pop(); //pop element if they are out of current K size window
    //         if (i+1 >= k) ans.push_back(pq.top().first);
    //     }
    //     return ans;
    // }

    // //Brute force, using nested loop having TC - O(N^2)
    // vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //     if(k == 1) return nums;

    //     int n = nums.size();
    //     vector<int> ans(n-k+1, 0);

    //     for(int i = 0; i < n-k+1; i++){
    //         int curr = INT_MIN;
    //         for(int j = i; j < i+k; j++)curr = max(curr, nums[j]);
    //         ans[i] = curr;
    //     }
    //     return ans;
    // }
};