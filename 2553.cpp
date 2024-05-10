// https://leetcode.com/problems/separate-the-digits-in-an-array/
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (auto i: nums){
            if (i >= 10){
                string str = to_string(i);
                for (auto j: str){
                    ans.push_back(int(j)-48);
                }
            } else {
                ans.push_back(i);
            }
        }

        return ans;
    }
};