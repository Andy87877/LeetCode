/*
https://leetcode.com/problems/min-cost-climbing-stairs/submissions/
https://leetcode.com/submissions/detail/596835734/
Runtime: 7 ms, faster than 56.58% of C++ online submissions for Min Cost Climbing Stairs.
Memory Usage: 13.5 MB, less than 95.99% of C++ online submissions for Min Cost Climbing Stairs.
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() == 2) {
            if (cost[1] < cost[0]) {
                return cost[1];
            } else {
                return cost[0];
            }
        } else if (cost.size() == 3) {
            if (cost[1] < cost[0]+cost[2]) {
                return cost[1];
            } else {
                return cost[0]+cost[2];
            }
        }
        
        
        int DP[cost.size()];
        DP[0] = cost[0];
        DP[1] = cost[1];
        
        for (int i = 2; i < cost.size(); i++) {
            if (DP[i-2] + cost[i] < DP[i-1] + cost[i]) {
                DP[i] = DP[i-2] + cost[i];
            } else {
                DP[i] = DP[i-1] + cost[i];
            }
        }
        
        //只會看最後面
        if (DP[cost.size()-1] > DP[cost.size()-2]) {
            return DP[cost.size()-2];
        } else {
            return DP[cost.size()-1];
        }
        
    }
};
