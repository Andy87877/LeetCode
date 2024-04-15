// https://leetcode.com/problems/add-digits/submissions/1209926015/
class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            string s = to_string(num);
            int tmp = 0;
            for (auto i: s){
                tmp += (int(i)-int('0'));
            }
            num = tmp;
        }
        return num;
    }
};