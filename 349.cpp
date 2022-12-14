// https://leetcode.com/problems/intersection-of-two-arrays/description/
// https://leetcode.com/problems/intersection-of-two-arrays/submissions/859722924/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> ma;
        for (auto i: nums1){
            ma[i]++;
        }

        map<int, int> ans_map;
        for (auto i: nums2) {
            if (ma[i] >= 1) ans_map[i]++;
        }

        for (auto i: ans_map) {
            ans.push_back(i.first);
        }
        return ans;
    }
};