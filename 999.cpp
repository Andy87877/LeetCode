// https://leetcode.com/problems/available-captures-for-rook/
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int X,Y;
        
        // find rook
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                if (board[i][j] == 'R'){
                    X = i;
                    Y = j;
                    break;
                }
            }
        }

        int ans = 0;
        for (int i = X-1; i >= 0; i--){
            if (board[i][Y] == 'B') break;
            if (board[i][Y] == 'p') {
                ans++;
                break;
            }
        }
        for (int i = X+1; i < 8; i++){
            if (board[i][Y] == 'B') break;
            if (board[i][Y] == 'p') {
                ans++;
                break;
            }
        }

        for (int i = Y-1; i >= 0; i--){
            if (board[X][i] == 'B') break;
            if (board[X][i] == 'p') {
                ans++;
                break;
            }
        }
        for (int i = Y+1; i < 8; i++){
            if (board[X][i] == 'B') break;
            if (board[X][i] == 'p') {
                ans++;
                break;
            }
        }


        return ans;
    }
};