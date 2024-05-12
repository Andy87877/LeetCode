// https://leetcode.com/problems/largest-local-values-in-a-matrix/description/
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int arr[grid.size()-2][grid.size()-2];

        for (int i = 1; i < grid.size()-1; i++){
            for (int j = 1; j < grid.size()-1; j++){
                int tmp = grid[i][j];
                for (int a = -1; a <= 1; a++){
                    for (int b = -1; b <= 1; b++){
                        tmp = max(grid[i+a][j+b], tmp);
                    }
                }
                arr[i-1][j-1] = tmp;
            }
        }

        vector<vector<int>> ans;
        for (int i = 0; i < grid.size()-2; i++){
            vector<int> vec;
            for (int j = 0; j < grid.size()-2; j++){
                vec.push_back(arr[i][j]);
            }
            ans.push_back(vec);
        }

        return ans;
    }
};