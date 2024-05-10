// https://leetcode.com/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> ma;
        ma[t[t.size()-1]]++;
        for (int i = 0; i < s.size(); i++){
            ma[s[i]]--;
            ma[t[i]]++;
        }

        for (auto i: ma){
            // cout << i.first << " " << i.second << "\n";
            if (i.second == 1) return i.first;
        }

        return 'a';
    }
};