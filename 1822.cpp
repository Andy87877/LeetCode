// https://leetcode.com/problems/sign-of-the-product-of-an-array/
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative = 0;
        for (auto i: nums){
            if (i < 0) negative++;
            if (i == 0) return 0;
        }
        if (negative%2) return -1;
        return 1;
    }
};