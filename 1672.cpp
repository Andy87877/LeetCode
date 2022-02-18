/*
https://leetcode.com/problems/richest-customer-wealth/submissions/
https://leetcode.com/submissions/detail/643975916/
Runtime: 4 ms, faster than 87.29% of C++ online submissions for Richest Customer Wealth.
Memory Usage: 7.9 MB, less than 16.46% of C++ online submissions for Richest Customer Wealth.
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total, max = -1;
        int n = accounts[0].size(); 
        for (int i = 0; i < accounts.size(); i++) {
            total = 0;
            for (int j = 0; j < n; j++) {
                total += accounts[i][j];
            }
            if  (max < total) {
                max = total;
            }
        }
        return max;
    }
};
