// https://leetcode.com/problems/reverse-string-ii/description/
class Solution {
public:
    string reverseStr(string s, int k) {
        int check = 0;
        string tmp = "";

        for (int i = 0; i < s.size(); i++){
            tmp += s[i];
            if (tmp.size() == k){
                if (check%2 == 0){
                    for (int j = 0; j < k; j++) {
                        s[i-j] = tmp[j];
                    }
                }
                tmp = "";
                check++;
            }
        }

        if (tmp.size() < k){
            if (check%2 == 0){
                for (int j = 0; j < tmp.size(); j++) {
                    s[s.size()-1-j] = tmp[j];
                }
            }
            tmp = "";
            check++;
        }

        return s;
    }
};