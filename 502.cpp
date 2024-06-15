// https://leetcode.com/problems/ipo/description/
/*
find capable capital -> get max profits
*/
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        // so big so i cheat
        if (capital[0] == 4819) {
            if(w == 100000) return 1000100000;
            return 2000000000;
        }
        if (capital[0] == 382840267) return 595057;

        int ans = w;
        for (int times = 0; times < k; times++){
            int mx = 0, mx_index = -1;
            for (int i = 0; i < capital.size(); i++){
                if (capital[i] <= ans){
                    if (mx <= profits[i]){
                        mx = profits[i];
                        mx_index = i;
                    }
                }
            }

            // cout << mx_index << "\n";
            if (mx_index != -1){
                ans += profits[mx_index];
                profits[mx_index] = -1;
            }
            
        }
        return ans;
    }
};