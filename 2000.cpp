// https://leetcode.com/problems/reverse-prefix-of-word/
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str = "";
        for (int i = 0; i < word.size(); i++){
            str += word[i];
            if (word[i] == ch){
                break;
            }
        }

        if (str.size() == word.size() && word[word.size()-1] != ch) return word;

        for (int i = 0; i < str.size(); i++){
            word[i] = str[str.size()-i-1];
        }

        return word;
    }
};