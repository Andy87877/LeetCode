/*
https://leetcode.com/problems/concatenation-of-array/submissions/
https://leetcode.com/submissions/detail/643951684/
Runtime: 8 ms, faster than 86.30% of C++ online submissions for Concatenation of Array.
Memory Usage: 12.6 MB, less than 63.59% of C++ online submissions for Concatenation of Array.
*/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a = nums;
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(nums[i]);
        }
        return a;
    }
};
