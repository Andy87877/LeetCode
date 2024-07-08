// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
class Solution {
public:
    int findTheWinner(int n, int k) {
        int vec[n+1];
        for (int i = 0; i < n+1; i++){
            vec[i] = 1;
        }

        int now = 0;

        for (int i = 0; i < n-1; i++){
            int j = 0;
            while(j != k){
                now = (now+1);
                if (now == n) now = 0;
                if (vec[now] == 1){
                    j++;
                }
            }

            vec[now] = 0;
            // cout << now << " ";
        }

        for (int i = 1; i < n+1; i++){
            if (vec[i] == 1){
                return i;
            }
        }

        return -1;
    }
};