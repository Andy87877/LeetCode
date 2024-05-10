// https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
        string tmp = "", ans;
        bool flag;

        for (auto i: s){
            if (i != ' '){
                tmp += i;
            } else {
                if (tmp != ""){
                    ans = tmp;
                    tmp = "";
                }
            }
        }

        if (tmp != ""){
            ans = tmp;
            tmp = "";
        }
        return ans.size();
    }
};