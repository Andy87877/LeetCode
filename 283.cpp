// https://leetcode.com/problems/move-zeroes/description/
// https://leetcode.com/problems/move-zeroes/submissions/864251261/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == 0) swap(nums[i], nums[j]);
            }
        }
    }
};