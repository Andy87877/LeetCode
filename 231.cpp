// https://leetcode.com/problems/power-of-two/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        long long tmp = 1;
        while (tmp < n){
            tmp *= 2;
        }
        return (tmp == n);
    }
};