// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/description/
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<int> row, col; // one
        for (int i = 0; i < m; i++){
            int tmp = 0;
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1) tmp++;
            }
            row.push_back(tmp);
        }

        for (int i = 0; i < n; i++){
            int tmp = 0;
            for (int j = 0; j < m; j++){
                if (grid[j][i] == 1) tmp++;
            }
            col.push_back(tmp);
        }


        vector<vector<int>> ans;
        for (int i = 0; i < m; i++){
            vector<int> vec_tmp;
            for (int j = 0; j < n; j++){
                // row[i]+col[j]-(m-row[i])-(n-col[j])
                vec_tmp.push_back(2*(row[i]+col[j])-(m+n));
            }
            ans.push_back(vec_tmp);
        }

        return ans;
    }
};