// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (auto i: nums){
            ans += (i%3 != 0);
        }
        return ans;
    }
};