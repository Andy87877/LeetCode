// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char arr[3][3];
        memset(arr, '.', sizeof(arr));
        for (int i = 0; i < moves.size(); i++){
            if (i%2 == 0){
                arr[moves[i][0]][moves[i][1]] = 'X';
            } else {
                arr[moves[i][0]][moves[i][1]] = 'O';
            }
        }

        // player A X
        for (int i = 0; i < 3; i++){
            bool flag = true;
            for (int j = 0; j < 3; j++){
                if (arr[i][j] != 'X') flag = false;
            }
            if (flag) return "A";

            flag = true;
            for (int j = 0; j < 3; j++){
                if (arr[j][i] != 'X') flag = false;
            }
            if (flag) return "A";
        }
        if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') return "A";
        if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') return "A";

        // player B O
        for (int i = 0; i < 3; i++){
            bool flag = true;
            for (int j = 0; j < 3; j++){
                if (arr[i][j] != 'O') flag = false;
            }
            if (flag) return "B";

            flag = true;
            for (int j = 0; j < 3; j++){
                if (arr[j][i] != 'O') flag = false;
            }
            if (flag) return "B";
        }
        if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') return "B";
        if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') return "B";

        if (moves.size()!=9) return "Pending";
        return "Draw";
    }
};