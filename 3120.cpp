// https://leetcode.com/problems/count-the-number-of-special-characters-i/
class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> ma;
        for (char i: word){
            ma[i]++;
        }

        int ans = 0;
        for (int i = int('A'); i <= int('Z'); i++){
            if (ma[char(i)] != 0){
                if (ma[char(i+32)] != 0) ans++;
            }
        }
        return ans;
    }
};
// cout << int('A')-int('a'); // -32