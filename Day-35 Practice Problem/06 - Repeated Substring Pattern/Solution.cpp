class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string a = s+s;
        return a.substr(1, a.size()-2).find(s) != string::npos;

        // //Brute force
        // int n = s.size();
        // for(int i = 1 ; i <= n/2; i++){
        //     if(n % i != 0) continue;

        //     string curr = s.substr(0, i);
        //     string temp = "";
        //     for(int j = 0 ; j < n / i; j++) temp += curr;

        //     if(temp == s) return true;
        // }

        return false;
    }
};