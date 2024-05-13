// https://leetcode.com/problems/score-after-flipping-matrix/description/
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        // 頭 = 1
        for (int i = 0; i < n; i++){
            if (grid[i][0] == 0){
                for (int j = 0; j < m; j++){
                    // 0->1 1->0
                    grid[i][j] = abs(grid[i][j]-1);
                }
            }
        }

        // 同排1較多
        for (int j = 1; j < m; j++){
            int one = 0;
            for (int i = 0; i < n; i++){
                if (grid[i][j] == 1) one++;
            }

            if (one <= n/2) {
                for(int i = 0; i < n; i++){
                    grid[i][j] = abs(grid[i][j]-1);
                }
            }
        }

        //轉換成答案
        int ans = 0;

        for (int i = 0; i < n; i++){
            int tmp = 0;
            for (int j = 0; j < m; j++){
                tmp *= 2;
                tmp += grid[i][j];
                // cout << grid[i][j] << " ";
            }
            // cout << endl;
            ans += tmp;
        }

        return ans;
    }
};
