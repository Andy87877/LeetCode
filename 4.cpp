// https://leetcode.com/problems/median-of-two-sorted-arrays/
/*
Runtime: 91 ms, faster than 19.31% of C++ online submissions for Median of Two Sorted Arrays.
Memory Usage: 90.1 MB, less than 22.09% of C++ online submissions for Median of Two Sorted Arrays.
*/
// 合併排序 ez
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> all;
        for (auto i: nums1) {
            all.push_back(i);
        }
        for (auto i: nums2) {
            all.push_back(i);
        }
        sort(all.begin(), all.end());
        
        if (all.size()%2 == 1) {
            return all[all.size()/2];
        } 
        return double(all[all.size()/2]+all[(all.size()/2)-1])/2;
    }
};