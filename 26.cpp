// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?source=submission-ac

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> ma;
        for (auto i: nums){
            ma[i]++;
        }

        // int si = nums.size();
        // for (int i = 0; i < si; i++){
        //     nums.pop_back();
        // }
        nums.clear();

        for(auto i: ma){
            nums.push_back(i.first);
        }

        return ma.size();
    }
};