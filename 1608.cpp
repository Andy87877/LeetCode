// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int x = 1; x < nums.size()-1; x++){
            if (nums[nums.size()-x] < x) {
                return -1;
            } else {
                if (nums[nums.size()-x-1] < x) {
                    return x;
                }
            }
        }

        if (nums[0] >= nums.size()) {
            return nums.size();
        } else {
            return -1;
        }
    }
};
/*
nums  0 0 3 4 4
index 0 1 2 3 4
*/