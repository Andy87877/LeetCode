// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, tmp = 0;
        for (auto i: s){
            if (i == '(') {
                tmp++;
                ans = max(ans, tmp);
            } 
            if (i == ')') tmp--;
        }
        return ans;
    }
};