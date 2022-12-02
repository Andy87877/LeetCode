// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
/*
Runtime: 354 ms, faster than 5.01% of C++ online submissions for Find All Numbers Disappeared in an Array.
Memory Usage: 52.8 MB, less than 5.38% of C++ online submissions for Find All Numbers Disappeared in an Array.
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> ma;
        vector<int> ans;
        for (auto i: nums) {
            ma[i]++;
        }
        
        for (int i = 1; i <= nums.size(); i++) {
            if (ma[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};