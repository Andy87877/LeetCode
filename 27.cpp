// https://leetcode.com/problems/remove-element/description/
// https://leetcode.com/problems/remove-element/submissions/861620695/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for (auto i: nums) {
            if (val != i) ans.push_back(i);
        }
        nums.clear();
        nums = ans;
        return nums.size();
    }
};