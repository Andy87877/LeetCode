/*
https://leetcode.com/problems/find-target-indices-after-sorting-array/submissions/
https://leetcode.com/submissions/detail/596282923/
Runtime: 8 ms, faster than 45.29% of C++ online submissions for Find Target Indices After Sorting Array.
Memory Usage: 11.8 MB, less than 11.30% of C++ online submissions for Find Target Indices After Sorting Array.
*/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        //sort
        int temp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            } else if (nums[i] > target) {
                break;
            }
        }
        return ans;
    }
};
