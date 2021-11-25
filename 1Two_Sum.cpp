/*
https://leetcode.com/problems/two-sum/submissions/
Runtime: 242 ms, faster than 33.82% of C++ online submissions for Two Sum.
Memory Usage: 10.3 MB, less than 65.04% of C++ online submissions for Two Sum.
*/
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ans = {};
            for (int i = 0; i < nums.size(); i++) {
                int other_target = target - nums[i];
                for (int j = i+1; j < nums.size(); j++) {
                    if (other_target == nums[j]) {
                        ans = {i,j};
                        break;
                    }
                }
            }
            return ans;
        }
};
// Only one valid answer exists.

