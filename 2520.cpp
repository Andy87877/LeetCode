// https://leetcode.com/problems/count-the-digits-that-divide-a-number/
class Solution {
public:
    int countDigits(int num) {
        int ans = 0, now = num;
        while (now > 0){
            if (num%(now%10) == 0) ans++;
            now /= 10;
        }
        return ans;
    }
};