/*
https://leetcode.com/submissions/detail/652677527/
https://leetcode.com/problems/shuffle-the-array/submissions/
Runtime: 6 ms, faster than 70.70% of C++ online submissions for Shuffle the Array.
Memory Usage: 10 MB, less than 26.75% of C++ online submissions for Shuffle the Array.
*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> forward, backward, ans;
        for (int i = 0; i < n; i++) {
            forward.push_back(nums[i]);
        }
        for (int i = n; i < 2*n; i++) {
            backward.push_back(nums[i]);
        }
        for (int i = 0; i < n; i++) {
            ans.push_back(forward[i]);
            ans.push_back(backward[i]);
        }
        return ans;
    }
};
