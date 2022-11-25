// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = -1;
        for (auto i: candies) {
            if (max < i) max = i;
        }
        for (auto i: candies) {
            if (i+extraCandies >= max) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};