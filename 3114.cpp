// https://leetcode.com/problems/latest-time-you-can-obtain-after-replacing-characters/description/
class Solution {
public:
    string findLatestTime(string s) {
        string ans = s;
        // 小時
        if (ans[0] == '?'){ // ?1:11
            if (ans[1] == '?'){ // ??:11
                ans[0] = '1';
                ans[1] = '1';
            } else if (int(ans[1]) <= int('1')) { // ?3
                ans[0] = '1';
            } else {
                ans[0] = '0';
            }
        } else if (ans[1] == '?'){ // 1?:11
            if (int(ans[0]) == int('0')){
                ans[1] = '9';
            } else {
                ans[1] = '1';
            }
        }

        // 分鐘
        if (ans[3] == '?'){ // ?1
            if (ans[4] == '?'){ // ??
                ans[3] = '5';
                ans[4] = '9';
            } else { // ?1
                ans[3] = '5';
            }
        } else if (ans[4] == '?'){ // 11:1?
            ans[4] = '9';
        }

        // cout << s << "\n" << ans << "\n";
        return ans;
    }
};