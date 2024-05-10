// https://leetcode.com/problems/convert-1d-array-into-2d-array/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m*n) return {};

        vector<vector<int>> ans;
        int now = 0;
        for (int i = 0; i < m; i++){
            vector<int> tmp;
            for (int j = 0; j < n; j++){
                tmp.push_back(original[now]);
                now++;
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};