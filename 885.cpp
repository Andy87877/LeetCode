// https://leetcode.com/problems/spiral-matrix-iii/
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int count = 0, steps = 1, d = 0;
        vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        ans.push_back({rStart, cStart});
        count += 1;

        while (count < rows * cols) {
            for (int i = 0; i < 2; i++) {
                for (int i = 0; i < steps; i++) {
                    rStart += dir[d][0];
                    cStart += dir[d][1];
                    if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                        ans.push_back({rStart, cStart});
                        count += 1;
                    }
                }
                d = (d + 1) % 4;
            }
            steps += 1;
        }

        return ans;
    }
};
