/*
https://leetcode.com/problems/n-th-tribonacci-number/submissions/
https://leetcode.com/submissions/detail/596428103/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for N-th Tribonacci Number.
Memory Usage: 5.8 MB, less than 81.58% of C++ online submissions for N-th Tribonacci Number.
*/
class Solution {
public:
    int tribonacci(int n) {
        int DP[38];
        DP[0] = 0;
        DP[1] = 1;
        DP[2] = 1;
        for (int i = 3; i <= n; i++) {
            DP[i] = DP[i-1]+DP[i-2]+DP[i-3];
        }
        return DP[n];
    }
};
