/*
https://leetcode.com/problems/single-number/submissions/
https://leetcode.com/submissions/detail/641977095/
Runtime: 59 ms, faster than 7.88% of C++ online submissions for Single Number.
Memory Usage: 20.1 MB, less than 11.08% of C++ online submissions for Single Number.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;
        for (auto i: nums) {
            a[i]++;
        }
        for (auto i: a) {
            if (i.second == 1) {
                return i.first;
            }
        }
        return 0;
    }
};
