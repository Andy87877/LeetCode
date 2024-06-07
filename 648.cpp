// https://leetcode.com/problems/replace-words/
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        map<string, int> ma;
        for (string i: dictionary){
            ma[i]++;
        }

        string ans = "";
        string tmp = "";
        bool flag = true; // NOT change
        for (int i = 0; i < sentence.size(); i++){
            if (sentence[i] == ' '){
                ans += tmp;
                ans += " ";
                tmp = "";
                flag = true;
            } else {
                if (ma[tmp] != 0){
                    flag = false;
                }
                if (flag) {
                    tmp += sentence[i];
                }
            }
        }

        ans += tmp;
        return ans;
    }
};