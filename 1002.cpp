// https://leetcode.com/problems/find-common-characters/description/
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int ans[26], tmp[26];
        int index;
        char ch;
        memset(ans, 0, sizeof(ans));

        for (int j = 0; j < words[0].size(); j++){
            ch = words[0][j];
            index = int(ch)-int('a');
            ans[index]++;
        }

        for (int i = 1; i < words.size(); i++){
            memset(tmp, 0, sizeof(tmp));
            for (int j = 0; j < words[i].size(); j++){
                ch = words[i][j];
                index = int(ch)-int('a');
                tmp[index]++;
            }
            for (int j = 0; j < 26; j++){
                ans[j] = min(ans[j], tmp[j]);
            }
        }

        vector<string> vec;
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < ans[i]; j++){
                string st = "";
                st += char(i+97);
                vec.push_back(st);
            }
        }
        return vec;
    }
};