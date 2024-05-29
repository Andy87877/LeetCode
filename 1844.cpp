// https://leetcode.com/problems/replace-all-digits-with-characters/description/
class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++){
            if (i%2 == 1){
                int tmp = int(s[i])-int('0');
                ans += char(int(s[i-1]) + tmp);
            } else {
                ans += s[i];
            }
        }
        return ans;
    }
};