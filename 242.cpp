// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        map<char, int> ma;
        for (int i= 0 ; i < s.size(); i++){
            ma[s[i]]++;
            ma[t[i]]--;
        }

        for (auto i: ma){
            if (ma[i.first] != 0){
                return false;
            }
        }

        return true;
    }
};