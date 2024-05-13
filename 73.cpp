// https://leetcode.com/problems/set-matrix-zeroes/description/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int arr[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                arr[i][j] = matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    for (int a = 0; a < n; a++){
                        arr[a][j] = 0;
                    }
                    for (int a = 0; a < m; a++){
                        arr[i][a] = 0;
                    }
                }
            }
        }


        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                matrix[i][j] = arr[i][j];
            }
        }

        
    }
};
