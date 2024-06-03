// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/
class Solution {
public:
    int appendCharacters(string s, string t) {
        int tmp = 0, ans = t.size();
        for (int i = 0; i < t.size(); i++){
            bool flag = true;
            for (int j = tmp; j < s.size(); j++){
                if (t[i] == s[j]){
                    flag = false;
                    tmp = j+1;
                    ans--;
                    break;
                }
            }

            if (flag){
                return ans;
            }
        }
        return 0;
    }
};

/*
coaching
coding
*/