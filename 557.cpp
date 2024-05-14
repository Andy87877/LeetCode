// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string tmp = "";

        for (auto i: s){
            if (i == ' '){
                if (tmp != ""){
                    vec.push_back(tmp);
                }
                tmp = "";
            } else {
                tmp += i;
            }
        }
        if (tmp != ""){
            vec.push_back(tmp);
        }

        string ans = "";
        for (auto arr: vec) {
            for (int j = arr.size()-1; j >= 0; j--){
                ans += arr[j];
            }
            ans += " ";
        }
        ans.pop_back();

        return ans;
    }
};