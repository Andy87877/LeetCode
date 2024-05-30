// https://leetcode.com/problems/minimum-moves-to-reach-target-score/description/
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int num = target, mx = maxDoubles, ans = 0;
        while (num != 1){
            ans++;
            // cout << num << " ";
            if (num%2 == 1){
                num--;
            } else {
                if (mx > 0){
                    num /= 2;
                    mx--;
                } else {
                    ans += (num-2);
                    break;
                }
                
            }
        }

        return ans;
    }
};