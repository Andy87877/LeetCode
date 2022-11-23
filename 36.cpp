// https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            map<char, int> ma;
            for (int j = 0; j < 9; j++) {
                ma[board[i][j]]++;
                if (ma[board[i][j]] == 2 && board[i][j] != '.') {
                    return false;
                }
            }
        }
        
        for (int i = 0; i < 9; i++) {
            map<char, int> ma;
            for (int j = 0; j < 9; j++) {
                ma[board[j][i]]++;
                if (ma[board[j][i]] == 2 && board[j][i] != '.') {
                    return false;
                }
            }
        }
        
        for (int tempi = 0; tempi < 3; tempi++) {
            for (int tempj = 0; tempj < 3; tempj++) {
                map<char, int> ma;
                for (int i = tempi*3; i < tempi*3+3; i++) {
                    for (int j = tempj*3; j < tempj*3+3; j++) {
                        ma[board[j][i]]++;
                        if (ma[board[j][i]] == 2 && board[j][i] != '.') {
                            return false;
                        }
                    }
                }
            }  
        }
        
        return true;
    }
};