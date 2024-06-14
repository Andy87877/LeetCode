// https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mx = -1;

        int ans = 0;
        for (int i = 0; i < nums.size(); i++){
            if (mx >= nums[i]){
                ans += ((mx-nums[i])+1);
            }
            mx = max(mx+1,nums[i]);
        }
        return ans;
    }
};