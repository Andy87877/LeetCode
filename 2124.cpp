// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description/
class Solution {
public:
    bool checkString(string s) {
        bool B = false;
        for (char i: s){
            if (i == 'a'){
                if (B) return false;
            } else {
                B = true;
            }
        }
        return true;
    }
}