// https://leetcode.com/problems/longest-palindromic-substring/description/
// https://leetcode.com/problems/longest-palindromic-substring/submissions/858678538/
class Solution {
public:
    string longestPalindrome(string s) {
        for (int i = s.size(); i >= 1; i--) { // 長度
            for (int j = 0; j <= s.size()-i; j++) { // 頭
                bool flag = true;
                // string ans = "";
                // for (int k = 0; k < i; k++) {
                //     ans += s[j+k];
                // }
                // cout << ans << "\n";
                for (int k = 0; k < (i/2)+1; k++) { // 判斷
                    // cout << s[j+k] << " " << s[j+i-k-1] << "\n";
                    if (s[j+k] != s[j+i-k-1]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    string ans = "";
                    for (int k = 0; k < i; k++) {
                        ans += s[j+k];
                    }
                    return ans;
                }
            }
        }
        return "error";
    }
};
