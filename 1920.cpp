/*
https://leetcode.com/problems/build-array-from-permutation/submissions/
https://leetcode.com/submissions/detail/643939692/
Runtime: 20 ms, faster than 52.34% of C++ online submissions for Build Array from Permutation.
Memory Usage: 16.2 MB, less than 79.25% of C++ online submissions for Build Array from Permutation.
*/
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> a = nums;
        for (int i = 0; i < nums.size(); i++) {
            a[i] = nums[nums[i]];
        } 
        return a;
    }
};
