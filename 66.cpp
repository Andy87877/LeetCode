// https://leetcode.com/problems/plus-one/description/
// https://leetcode.com/problems/plus-one/submissions/856098930/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = false;
        for (int i = digits.size()-1; i >= 0; i--) {
            if (digits[i] == 9) {
                flag = true;
                digits[i] = 0;
            } else {
                flag = false;
                digits[i]++;
                break;
            }
        }

        if (flag) {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};