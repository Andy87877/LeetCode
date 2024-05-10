// https://leetcode.com/problems/find-triangular-sum-of-an-array/
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> now = nums, tmp;

        while (now.size() != 1){
            tmp.clear();

            for (int i = 0; i < now.size()-1; i++){
                tmp.push_back((now[i]+now[i+1])%10);
            }

            now = tmp;
        }
        return now[0];
    }
};