// https://leetcode.com/problems/lucky-numbers-in-a-matrix/
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> row_min;
        vector<int> col_max;

        for (int i = 0; i < n; i++){
            int mn = matrix[i][0];
            for (int j = 0; j < m; j++){
                if (mn > matrix[i][j]){
                    mn = matrix[i][j];
                }
            }
            row_min.push_back(mn);
        }

        for (int i = 0; i < m; i++){
            int mx = matrix[0][i];
            for (int j = 0; j < n; j++){
                if (mx < matrix[j][i]){
                    mx = matrix[j][i];
                }
            }
            col_max.push_back(mx);
        }

        vector<int> ans;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (row_min[i] == col_max[j]){
                    ans.push_back(row_min[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
/*
 3  7  8
 9 11 13
15 16 17
*/
