// https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/description/
class Solution {
public:
    int minDays(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int BFS[m][n];

        memset(BFS, 0, sizeof(BFS));
        
        // for (int i = 0; i < m; i++){
        //     for (int j = 0; j < n; j++){
        //         cout << grid[i][j] << " ";
        //     }
        //     cout << "\n";
        // }


        // 1. 看有沒有已經切割的島嶼(BFS)
        bool Frist_check = true;
        bool Return_0 = false; // 已經有不同的
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1){
                    if (Frist_check){
                        Frist_check = false;
                    } else {
                        if (BFS[i][j] == 0){
                            Return_0 = true;
                            break;
                        }
                    }

                    if (Return_0){
                        continue;
                    }
                    
                    queue<pair<int,int>> que;
                    int X = i, Y = j;
                    que.push({X,Y});

                    while (que.size() != 0){
                        pair<int,int> pa;
                        pa = que.front();
                        que.pop();

                        X = pa.first, Y = pa.second;
                        if (X == m || X == -1 || Y == n || Y == -1){
                            continue;
                        }
                        if (grid[X][Y] == 0 || BFS[X][Y] == 1){
                            continue;
                        }

                        BFS[X][Y] = 1;
                        que.push({X+1,Y});
                        que.push({X-1,Y});
                        que.push({X,Y+1});
                        que.push({X,Y-1});
                    }
                }
            }
        }
        if (Return_0) return 0;
        if (Frist_check) return 0;

        // 2. 如果只有兩格 return 2

        int tmp = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (BFS[i][j] == 1){
                    tmp++;
                }
            }
        }
        if (tmp == 2) return 2;

        /*
        3. land周圍有幾個land
        if 有只有一個的 return 1
        else return 2
        */

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                tmp = 0;
                if (grid[i][j] == 1){
                    if (i != m-1){
                        if (grid[i+1][j] == 1){tmp++;}
                    }
                    if (i != 0){
                        if (grid[i-1][j] == 1){tmp++;}
                    }
                    if (j != n-1){
                        if (grid[i][j+1] == 1){tmp++;}
                    }
                    if (j != 0){
                        if (grid[i][j-1] == 1){tmp++;}
                    }

                    if (tmp <= 1) return 1;

                    /* 3.1
                    if tmp == 2 
                    嘗試刪除 然後再BFS一次
                    */

                    if (tmp >= 2){
                        memset(BFS, 0, sizeof(BFS));
                        Frist_check = true;
                        bool Return_1 = false; // 已經有不同的

                        grid[i][j] = 0;

                        for (int i = 0; i < m; i++){
                            for (int j = 0; j < n; j++){
                                if (grid[i][j] == 1){
                                    if (Frist_check){
                                        Frist_check = false;
                                    } else {
                                        if (BFS[i][j] == 0){
                                            Return_1 = true;
                                            break;
                                        }
                                    }

                                    if (Return_1){
                                        continue;
                                    }
                                    
                                    queue<pair<int,int>> que_tmp;
                                    int X = i, Y = j;
                                    que_tmp.push({X,Y});

                                    while (que_tmp.size() != 0){
                                        pair<int,int> pa;
                                        pa = que_tmp.front();
                                        que_tmp.pop();

                                        X = pa.first, Y = pa.second;
                                        if (X == m || X == -1 || Y == n || Y == -1){
                                            continue;
                                        }
                                        if (grid[X][Y] == 0 || BFS[X][Y] == 1){
                                            continue;
                                        }

                                        BFS[X][Y] = 1;
                                        que_tmp.push({X+1,Y});
                                        que_tmp.push({X-1,Y});
                                        que_tmp.push({X,Y+1});
                                        que_tmp.push({X,Y-1});
                                    }
                                }
                            }
                        }
                        if (Return_1) {
                            return 1;
                        }

                        grid[i][j] = 1;
                    }

                }
            }
        }


        return 2;

    }
};
/*
1. 看有沒有已經切割的島嶼(BFS)
if 有 return 0
not 

2. 如果只有兩格 return 2

3. land周圍有幾個land
if 有只有一個的 return 1
else return 2
*/
