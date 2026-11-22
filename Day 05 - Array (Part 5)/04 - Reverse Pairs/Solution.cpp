class Solution {
public:
    int conquer(vector<int> &nums, int st, int mid, int ed){
        int j = mid+1;
        int ans = 0;

        for(int i = st; i <= mid; i++){
            while(j <= ed && nums[i] > 2ll * nums[j]) j++;
            ans += (j - mid - 1);
        }

        vector<int> curr;
        int i = st; j = mid+1;
        while(i <= mid && j <= ed){
            if(nums[i] < nums[j]) curr.push_back(nums[i++]);
            else curr.push_back(nums[j++]);
        }

        while(i <= mid)curr.push_back(nums[i++]);
        while(j <= ed) curr.push_back(nums[j++]);
        
        int k = st;
        for(int &i: curr)nums[k++] = i;
        return ans;
    }

    int mergeSort(vector<int> &nums, int st, int ed){
        int ans = 0;
        if(st < ed){
            int mid = st + (ed - st) / 2;
            ans += mergeSort(nums, st, mid);
            ans += mergeSort(nums, mid+1, ed);

            ans += conquer(nums, st, mid, ed);
        }

        return ans;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }

    //Brute force
    // int reversePairs(vector<int>& nums) {
    //     int ans = 0;
    //     for(int i = 0 ; i < nums.size()-1; i++){
    //             for(int j = i+1; j < nums.size(); j++){
    //                     long long c = 1ll * nums[j] * 2;
    //                     if(c < nums[i]) ans++;
    //             }
    //     }
    //     return ans;
    // }
};