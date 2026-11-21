class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        unordered_map<char, int> m;
        for(auto &c: t) m[c]++;

        int minLength = INT_MAX;
        int i = 0;
        int start_i = 0;
        int count = t.size();
        for(int j = 0 ; j < s.size() ; j++){
            if(m[s[j]] > 0) count--;
            m[s[j]]--;
                
            while(count == 0){
                int currLength = j - i + 1;
                if(minLength > currLength){
                    minLength = currLength;
                    start_i = i;
                }

                m[s[i]]++;

                if(m[s[i]] > 0) count++;

                i++;
            }
        }


        return minLength == INT_MAX ? "" : s.substr(start_i, minLength);
    }
};