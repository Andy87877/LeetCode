/*
https://leetcode.com/problems/climbing-stairs/submissions/
https://leetcode.com/submissions/detail/596676631/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 5.9 MB, less than 52.24% of C++ online submissions for Climbing Stairs.
*/
class Solution {
public:
    int climbStairs(int n) {
        int DP[46];
        DP[0] = 1;
        DP[1] = 2;
        for (int i = 2; i < n; i++) {
            DP[i] = DP[i-1] + DP[i-2];
        }
        return DP[n-1];
    }
};
