// https://leetcode.com/problems/monotonic-array/
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool up = false, down = false;
        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] < nums[i+1]) {
                up = true;
            }
            if (nums[i] > nums[i+1]) {
                down = true;
            }
            if (up && down) return false;
        }
        return true;
    }
};