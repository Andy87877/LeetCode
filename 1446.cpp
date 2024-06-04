// https://leetcode.com/problems/consecutive-characters/
class Solution {
public:
    int maxPower(string s) {
        int ans = 1, now = 1;
        for (int i = 1; i < s.size(); i++){
            if (s[i] == s[i-1]){
                now++;
            } else {
                ans = max(now,ans);
                now = 1;
            }
        }
        ans = max(now,ans);
        return ans;
    }
};