// https://leetcode.com/problems/student-attendance-record-i/description/
class Solution {
public:
    bool checkRecord(string s) {
        int A = 0, L = 0;
        for (auto i: s){
            if (i == 'A'){
                A++;
                if (A >= 2) return false;
                L = 0;
            } else if (i == 'L'){
                L++;
                if (L >= 3) return false;
            } else {
                L = 0;
            }
        }
        return true;
    }
};