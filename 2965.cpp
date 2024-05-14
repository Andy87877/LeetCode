// https://leetcode.com/problems/find-missing-and-repeated-values/description/
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> ma;
        int n = grid.size();

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                ma[grid[i][j]]++;
            }
        }

        int a = 0,b = 0;
        for (int i = 1; i <= n*n; i++){
            if (ma[i] == 2) {
                a = i;
                if (b!=0) break;
            }
            if (ma[i] == 0) {
                b = i;
                if (a!=0) break;
            }
        }

        return {a,b};
    }
};