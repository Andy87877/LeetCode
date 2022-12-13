// https://leetcode.com/problems/minimum-falling-path-sum/description/
// https://leetcode.com/problems/minimum-falling-path-sum/submissions/859196906/
/*
從第二層開始找
找斜上與正上
把該數字加起來

然後到第三層 以此類推
*/
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if (matrix.size() == 1) return matrix[0][0];

        for (int i = 1; i < matrix.size(); i++) {
            matrix[i][0] += min(matrix[i-1][0], matrix[i-1][1]);
            for (int j = 1; j < matrix.size()-1; j++) {
                matrix[i][j] += min(min(matrix[i-1][j-1],matrix[i-1][j]), matrix[i-1][j+1]);
            }
            matrix[i][matrix.size()-1] += min(matrix[i-1][matrix.size()-1], matrix[i-1][matrix.size()-2]);
        }

        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix.size(); j++) {
        //         cout <<　matrix[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        int ans = matrix[matrix.size()-1][0];
        for (int j = 1; j < matrix.size(); j++) {
            ans = min(ans, matrix[matrix.size()-1][j]);
        }
        return ans;
    }
};
