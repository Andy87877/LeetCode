// https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/description/
class Solution {
public:
    int minimumChairs(string s) {
        int now = 0, ans;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'E'){
                now++;
                ans = max(ans, now);
            } else {
                now = max(0,now-1);
            }
            // cout << now << "\n";
        }
        return ans;
    }
};