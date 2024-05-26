// https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = nums[0];
        for (auto i: nums) mx = max(mx, i);

        cout << mx;
        int tmp = 0, ans;
        for (auto i: nums){
            if ((mx/2) < i){
                if (mx != i) {
                    return -1;
                } else {
                    ans = tmp; 
                }
            }
            tmp++;
        }
        return ans;
    }
};