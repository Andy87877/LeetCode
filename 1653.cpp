// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/
class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0;
        int b = 0;
        for (auto i: s){
            if (i == 'b'){
                b++; 
            } else {
                ans = min(ans+1, b);
            }
        }
        return ans;
    }
};
