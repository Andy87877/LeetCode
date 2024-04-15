// https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> v;
        for (int i = s.size()-1; i >= 0; i--){
            v.push_back(s[i]);
            // cout << s[i] << "\n";
        }
        s.clear();

        for (auto i: v){
            s.push_back(i);
        }
    }
};