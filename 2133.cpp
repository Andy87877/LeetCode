// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            unordered_map<int, int> ma;
            for (int j = 0; j < matrix.size(); j++) {
                ma[matrix[i][j]]++;
                if (ma[matrix[i][j]] == 2) return false;
            }   
        }
        
        for (int i = 0; i < matrix.size(); i++) {
            unordered_map<int, int> ma;
            for (int j = 0; j < matrix.size(); j++) {
                ma[matrix[j][i]]++;
                if (ma[matrix[j][i]] == 2) return false;
            }   
        }
        return true;
    }
};