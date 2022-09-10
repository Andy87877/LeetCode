/*
Runtime: 7 ms, faster than 57.13% of C++ online submissions for Longest Common Prefix.
Memory Usage: 9.2 MB, less than 55.16% of C++ online submissions for Longest Common Prefix.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mi = strs[0].size();
        for (auto i: strs) {
            if (i.size() < mi) {
                mi = i.size();
            }
        }
        
        string ans = "";
        for (int i = 0; i < mi; i++) {
            char check = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (check != strs[j][i]) {
                    return ans;
                }
            }
            ans += check;
        }
        return ans;
    }
};
