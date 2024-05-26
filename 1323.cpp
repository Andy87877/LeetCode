// https://leetcode.com/problems/maximum-69-number/
class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '6'){
                str[i] = '9';
                break;
            }
        }

        int ans = 0;
        for (auto i: str){
            ans *= 10;
            ans += (int(i)-int('0'));
        }
        return ans;
    }
};