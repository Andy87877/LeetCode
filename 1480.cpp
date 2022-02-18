/*
https://leetcode.com/problems/running-sum-of-1d-array/submissions/
https://leetcode.com/submissions/detail/643962866/
Runtime: 2 ms, faster than 74.65% of C++ online submissions for Running Sum of 1d Array.
Memory Usage: 8.4 MB, less than 93.67% of C++ online submissions for Running Sum of 1d Array.
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
};
