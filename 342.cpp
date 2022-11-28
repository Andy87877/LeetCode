// https://leetcode.com/problems/power-of-four/
/*
Runtime: 3 ms, faster than 62.89% of C++ online submissions for Power of Four.
Memory Usage: 6 MB, less than 25.65% of C++ online submissions for Power of Four.
*/
// ez
class Solution {
public:
    bool isPowerOfFour(int n) {
        int times = 0;
        while (pow(4,times) < n) {
            times++;
        }
        return (n == pow(4,times));
    }
};