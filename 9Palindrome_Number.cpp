/*
https://leetcode.com/problems/palindrome-number/
Runtime: 8 ms, faster than 80.36% of C++ online submissions for Palindrome Number.
Memory Usage: 5.9 MB, less than 74.12% of C++ online submissions for Palindrome Number.
*/
#include<string>  

class Solution {
public:
    bool isPalindrome(int x) {
        string strx; //  From left to right  
        string strx2 = "";// From right to left
        strx = to_string(x);
        for (int i = strx.size()-1; i >= 0; i--) {
            strx2 += strx[i];
        }
        if (strx2 == strx) {
            return true;
        } else {
            return false;
        }
    }
};
