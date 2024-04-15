// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/
class Solution {
public:
    string removeTrailingZeros(string num) {
        int times = 0;
        for (int i = num.size()-1; i >= 0; i--){
            if (num[i] != '0') break;
            num.pop_back();
        }
        return num;
    }
};