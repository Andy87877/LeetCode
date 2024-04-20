// https://leetcode.com/problems/find-the-highest-altitude/description/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int now = 0, mx = 0;
        for (auto i: gain) {
            now += i;
            mx = max(now, mx);
        }
        return mx;
    }
};
