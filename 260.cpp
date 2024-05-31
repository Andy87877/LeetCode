// https://leetcode.com/problems/single-number-iii/description/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> ma;
        for (auto i: nums){
            ma[i]++;
        }

        vector<int> ans;
        for (auto i: ma){
            if (i.second == 1){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};