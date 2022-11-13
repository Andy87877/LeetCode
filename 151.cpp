// https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss;
        string temp;
        ss << s;
        vector<string> str;
        
        while (ss >> temp){
            str.push_back(temp);
            cout << temp << " ";
        }
        
        string ans;
        for (int i = str.size()-1; i >= 0; i--) {
            ans += str[i];
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};