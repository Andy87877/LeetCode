// https://leetcode.com/problems/first-missing-positive/
/*
Runtime: 196 ms, faster than 19.89% of C++ online submissions for First Missing Positive.
Memory Usage: 47.7 MB, less than 7.04% of C++ online submissions for First Missing Positive.
*/
// 用set應該也可以
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> ma;
        for (auto i: nums) {
            ma[i]++;
        }
        
        int temp = 1;
        while (1) {
            if (ma[temp] == 0) break;
            temp++;
        }
        return temp;
    }
};