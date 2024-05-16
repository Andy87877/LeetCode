// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans = 0;
        for (int i: nums){
            if (i >= 10){
                ans += i;

                string str = to_string(i);
                for (char j: str) {
                    ans -= (int(j)-int('0'));
                }
            }
        }
        return ans;
    }
};