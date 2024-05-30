// https://leetcode.com/problems/split-the-array/
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> ma;
        for (auto i: nums){
            ma[i]++;
            if (ma[i] > 2) return false;
        }
        return true;
    }
};