// https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        double ans = nums[n-1];
        for (int i = 0; i < n/2; i++){
            double num = (nums[i]*1.000+nums[n-i-1]*1.000)/2;
            ans = min(ans, num);
        }
        return ans;
    }
};