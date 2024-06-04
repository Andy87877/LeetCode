// https://leetcode.com/problems/is-subsequence/description/
/*
Runtime 0ms   Beats100.00%
Memory 7.38MB   Beats 93.62%
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tmp = 0;
        for (int i = 0; i < s.size(); i++){
            bool flag = true;
            for (int j = tmp; j < t.size(); j++){
                if (s[i] == t[j]){
                    flag = false;
                    tmp = j+1;
                    break;
                }
            }
            if (flag) return false;
        }
        return true;
    }
};