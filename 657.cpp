// https://leetcode.com/problems/robot-return-to-origin/description/
class Solution {
public:
    bool judgeCircle(string moves) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int a = 0,b = 0;
        for (auto i: moves){
            if (i == 'R') {
                a++;
            } else if (i == 'L'){
                a--;
            } else if (i == 'U'){
                b++;
            } else {
                b--;
            }
        }

        return (a==0 && b==0);
    }
};