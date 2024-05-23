// https://leetcode.com/problems/find-the-integer-added-to-array-i/
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        
        // find min
        int a = nums1[0], b = nums2[0];
        for (auto i: nums1){
            a = min(a,i);
        }
        for (auto i: nums2){
            b = min(b,i);
        }

        return b-a;
    }
};