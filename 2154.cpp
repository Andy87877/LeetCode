// https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int> ma;
        for (auto i: nums){
            ma[i]++;
        }

        int ans = original;
        while(ma[ans] != 0){
            ans *= 2;
        }
        return ans;
    }
};