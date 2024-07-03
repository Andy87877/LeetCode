// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/
class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 4) return 0;
        sort(nums.begin(), nums.end());

        int ans = nums[nums.size()-1] - nums[0];
        for (int i = 0; i < 4; i++){
            ans = min(ans, nums[nums.size()-(4-i)] - nums[i]);
        }
        return ans;
    }
};
