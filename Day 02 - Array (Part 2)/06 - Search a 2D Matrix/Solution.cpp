class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int j = m * n - 1;
        int i = 0;
        while(i <= j){
            int mid = i + (j - i) / 2;

            int r = mid / m;
            int c = mid % m;

            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) j = mid - 1;
            else i = mid + 1;
        }

        return false;
    }
};