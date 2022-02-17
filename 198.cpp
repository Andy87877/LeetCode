/*
https://leetcode.com/problems/house-robber/
https://leetcode.com/submissions/detail/597201739/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber.
Memory Usage: 7.5 MB, less than 94.03% of C++ online submissions for House Robber.
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        } else if (nums.size() == 2) {
            if (nums[0] > nums[1]) {
                return nums[0];
            } else {
                return nums[1];
            }
        } else if (nums.size() == 3) {
            if (nums[0]+nums[2] > nums[1]) {
                return nums[0]+nums[2];
            } else {
                return nums[1];
            }
        }
        
        //size >= 4
        int DP[nums.size()];
        DP[0] = nums[0];
        DP[1] = nums[1];
        DP[2] = nums[2]+nums[0];
        
        for (int i = 3; i < nums.size(); i++) {
            if (DP[i-3] > DP[i-2]) {
                DP[i] = DP[i-3] + nums[i];
            } else {
                DP[i] = DP[i-2] + nums[i];
            }
        }
        
        if (DP[nums.size()-1] > DP[nums.size()-2]) {
            return DP[nums.size()-1];
        } else {
            return DP[nums.size()-2];
        }
    }
};
