// https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans, big;
        int same = 0;
        for (auto i: nums){
            if (i < pivot){
                ans.push_back(i);
            } else if (i > pivot){
                big.push_back(i);
            } else {
                same++;
            }
        }
        
        for (int i = 0; i < same; i++) ans.push_back(pivot);

        for (auto i: big) ans.push_back(i);

        return ans;
    }
};