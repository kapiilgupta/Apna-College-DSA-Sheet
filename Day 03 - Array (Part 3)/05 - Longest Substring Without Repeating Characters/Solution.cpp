class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m;
        int ans = 0;
        int j = 0;
        for(int i = 0 ; i < s.size(); i++){
            while(m.contains(s[i])) m.erase(s[j++]);
            m.insert(s[i]);
            ans = max(ans, i-j+1);
        }

        return ans;
    }
};