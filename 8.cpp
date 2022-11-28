// https://leetcode.com/problems/string-to-integer-atoi/
/*
Runtime: 9 ms, faster than 31.76% of C++ online submissions for String to Integer (atoi).
Memory Usage: 7 MB, less than 52.82% of C++ online submissions for String to Integer (atoi).
*/

/*
這一題的陷阱有點多
像是前面如果有0 後面就不能非數字的字元
還有很多陷阱
自己去發掘吧w
*/
class Solution {
public:
    int myAtoi(string s) {
        bool ne = false, first = false; // -,+
        long ans = 0;
        for (auto i: s) {
            cout << i;
            if (int(i) == '0') {
                if (ans != 0) {
                    ans *= 10;
                }
            } else if (int(i) >= int('1') && int(i) <= int('9')) {
                ans *= 10;
                ans += int(i)-48;
            } else if (i == '-' || i == '+' || i == ' ') {
                if (i == ' ') {
                    if (ans != 0) break;
                }
                if (first) {
                    break;
                } else {
                    if (i == '-') ne = true; 
                }
            } else {
                break;
            }
            
            if (ans >= pow(2,31)) {
                break;
            }
            
            if (i != ' ') {
                first = true;
            }
        }
        
        if (ans >= pow(2,31)) {
            if (ne) return -1*(pow(2,31));
            return pow(2,31)-1;
        }
        
        if (ne) ans *= -1;
        return ans;
    }
};