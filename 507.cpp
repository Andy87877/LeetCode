// https://leetcode.com/problems/perfect-number/description/
// https://leetcode.com/problems/perfect-number/submissions/860202891/
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp = 0;
        for (int i = 1; i < num; i++) {
            if (num%i == 0) temp += i;
        }
        return temp == num;
    }
};