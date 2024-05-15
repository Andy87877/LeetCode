// https://leetcode.com/problems/power-of-three/description/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;

        long long a = 1;
        while (a < n){
            a *= 3;
            if (n == a) return true;
        }

        return false;
    }
};