// https://leetcode.com/problems/to-lower-case/description/
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0 ; i < s.size(); i++){
            cout << s[i] << "\n";
            if ((int(s[i]) >= int('A')) &&(int(s[i]) <= int('Z'))){
                s[i] = char(int(s[i])+32);
            }
        }
        return s;
    }
};