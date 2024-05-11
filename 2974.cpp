// https://leetcode.com/problems/minimum-number-game/description/
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans = nums;
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i+=2){
            swap(ans[i], ans[i+1]);
        }

        return ans;
    }
};