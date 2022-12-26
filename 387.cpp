// https://leetcode.com/problems/first-unique-character-in-a-string/description/
// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/865790857/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> ma;
        for (auto i: s) {
            ma[i]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (ma[s[i]] == 1) return i;
        }
        return -1;
    }
};