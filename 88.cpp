// https://leetcode.com/problems/merge-sorted-array/
/*
Runtime: 4 ms, faster than 62.76% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9 MB, less than 72.73% of C++ online submissions for Merge Sorted Array.
*/
// 水到不知道要說啥
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = nums1.size()-1; i >= m; i--) {
            nums1.pop_back();
        }
        for (int i = 0; i < n; i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};