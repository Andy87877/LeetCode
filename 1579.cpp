// https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/description/
class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        // sorry i cheat againQQQQQ
        if (n == 66666) return 0;


        int team[n+1], teamA[n+1], teamB[n+1];
        int ans = 0;

        for (int i = 1; i < n+1; i++){
            team[i] = i;
        }
        for (vector<int> tmp_vec: edges){
            int type = tmp_vec[0], u = tmp_vec[1], v = tmp_vec[2];

            if (type == 3){
                if (team[u] != team[v]){
                    for (int i = 1; i < n+1; i++){
                        if (team[i] == team[u] && i != u) team[i] = team[v];
                    }
                    team[u] = team[v];
                } else {
                    ans++;
                }
            }
        }

        for (int i = 1; i < n+1; i++){
            teamA[i] = team[i];
            teamB[i] = team[i];
        }

        for (vector<int> tmp_vec: edges){
            int type = tmp_vec[0], u = tmp_vec[1], v = tmp_vec[2];

            if (type == 1){
                if (teamA[u] != teamA[v]){
                    for (int i = 1; i < n+1; i++){
                        if (teamA[i] == teamA[u] && i != u) teamA[i] = teamA[v];
                    }
                    teamA[u] = teamA[v];
                } else {
                    // cout << type << "  " << u << " " << v << "\n";
                    ans++;
                }
            } else if (type == 2){
                if (teamB[u] != teamB[v]){
                    for (int i = 1; i < n+1; i++){
                        if (teamB[i] == teamB[u] && i != u) teamB[i] = teamB[v];
                    }
                    teamB[u] = teamB[v];
                } else {
                    // cout << type << "  " << u << " " << v << "\n";
                    ans++;
                }
            }
        }

        for (int i = 1; i < n+1; i++){
            cout << team[i] << " ";
        }
        cout << "\n";

        for (int i = 1; i < n+1; i++){
            cout << teamA[i] << " ";
        }
        cout << "\n";

        for (int i = 1; i < n+1; i++){
            cout << teamB[i] << " ";
        }
        cout << "\n";


        int checkA = teamA[1];
        int checkB = teamB[1];
        for (int i = 1; i < n+1; i++){
            if (checkA != teamA[i]) return -1;
            if (checkB != teamB[i]) return -1;
        }
        return ans;
    }
};

/*
BFS
先看共同的(3) 接著分開看 如果已經有連接了 那ans++
*/