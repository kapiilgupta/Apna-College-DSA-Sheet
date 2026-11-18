class Solution {
public:
    void setZeroes(vector<vector<int>>& vec) {
        int n = vec.size();
        int m = vec[0].size();
        bool firstR = false;
        bool firstC = false;

        for(int i = 0; i < m; i++){
            if(vec[0][i] == 0) {
                firstC = true;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(vec[i][0] == 0){
                firstR = true;
                break;
            }
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(vec[i][j] == 0){
                    vec[i][0] = 0;
                    vec[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(vec[0][j] == 0 || vec[i][0] == 0){
                    vec[i][j] = 0;
                }
            }
        }

        if(firstR){
            for(int i = 0; i < n; i++){
                vec[i][0] = 0;
            }
        }

        if(firstC){
            for(int i = 0; i < m; i++){
                vec[0][i] = 0;
            }
        }
    }
};