// https://leetcode.com/problems/longest-palindrome/description/

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> ma;
        for (auto i: s) {
            ma[i]++;
        }

        bool odd = false;
        int ans = 0;
        for (auto i: ma) {
            if (i.second%2 == 0) {
                ans += (i.second);
            } else {
                odd = true;
                ans += (i.second-1);
            }
        } 
        if (odd) ans++;

        return ans;
    }
};