// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        for(auto i: words){
            ans += i[0];
        }
        return ans==s;
    }
};
