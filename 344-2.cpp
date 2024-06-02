// https://leetcode.com/problems/reverse-string/description/
class Solution {
public:
    void reverseString(vector<char>& s) {
        string tmp;
        for (int i = s.size()-1; i >= 0; i--){
            tmp += s[i];
        }
        for (int i = 0; i < s.size(); i++){
            s[i] = tmp[i];
        }
    }
};