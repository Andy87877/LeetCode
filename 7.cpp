// https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    long long reverse(int x) { 
        long long ans = 0, temp = x;
        if (temp < 0) temp*=-1;
        while (temp != 0) {
            cout << ans << "\n";
            ans *= 10;
            ans += temp%10;
            temp /= 10;
        }
        
        if (ans >= pow(2,31)-1){
            return 0;
        }
        if (x < 0) ans*=-1;
        return ans;
    }
};