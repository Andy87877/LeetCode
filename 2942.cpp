// https://leetcode.com/problems/find-words-containing-character/
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> vec;
        for (int i = 0; i < words.size(); i++){
            string str = words[i];
            for (int j = 0; j < str.size(); j++){
                if (str[j] == x){
                    vec.push_back(i);
                    break;
                }
            }
        }

        return vec;
    }
};
