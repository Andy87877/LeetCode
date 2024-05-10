// https://leetcode.com/problems/spiral-matrix-ii/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if (n == 1) return {{1}};
        if (n == 2) return {{1,2},{4,3}};
        if (n == 3) return {{1,2,3},{8,9,4},{7,6,5}};

        int arr[n][n];
        memset(arr, 0, sizeof(arr));

        

        for (int i = 1; i <= n; i++){
            arr[0][i-1] = i;
        }
        for (int i = n+1; i <= n*2-1; i++){
            arr[i-n][n-1] = i;
        }
        for (int i = n*2; i <= n*3-1; i++){
            arr[n-1][n*3-i-1] = i-1;
        }
        for (int i = n*3; i <= n*4-2; i++){
            arr[n*4-i-1][0] = i-2;
        }

        int dirX[4] = {0,1,0,-1}; //轉向X
        int dirY[4] = {1,0,-1,0}; //轉向Y

        int X = 1,Y = 1, d = 0; //X Y 方向

        for (int i = (n*4-4)+1; i <= n*n; i++){
            arr[X][Y] = i;
            X += dirX[d];
            Y += dirY[d];

            if (arr[X+dirX[d]][Y+dirY[d]] != 0){
                d++;
                d%=4;
            }
        }

        vector<vector<int>> ans;
        for (int i = 0 ; i < n; i++){
            vector<int> tmp;
            for (int j = 0; j < n; j++){
                tmp.push_back(arr[i][j]);
                // cout << arr[i][j] << " ";
            }
            ans.push_back(tmp);
            // cout << "\n";
        }

        return ans;
    }
};