// https://leetcode.com/problems/contains-duplicate/submissions/1209879727/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> ma;
        for (auto i: nums){
            ma[i]++;
            if (ma[i] != 1) return true;
        }
        return false;
    }
};
