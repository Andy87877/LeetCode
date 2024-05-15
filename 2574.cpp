// https://leetcode.com/problems/left-and-right-sum-differences/description/
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int a[nums.size()], b[nums.size()];
        a[0] = 0;
        b[nums.size()-1] = 0;
        for (int i = 1; i < nums.size(); i++) {
            a[i] = nums[i-1] + a[i-1];
        }
        for (int i = nums.size()-2; i >= 0; i--) {
            b[i] = nums[i+1] + b[i+1];
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            ans.push_back(abs(a[i]-b[i]));
        }

        return ans;
    }
};