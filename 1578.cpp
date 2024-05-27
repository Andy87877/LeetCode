// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, total = neededTime[0], mx = neededTime[0];

        for (int i = 1; i < colors.size(); i++){
            if (colors[i] == colors[i-1]){
                total += neededTime[i];
                mx = max(mx, neededTime[i]);
            } else {
                ans += (total-mx);
                total = neededTime[i];
                mx = neededTime[i];
            }
        }

        ans += (total-mx);
        return ans;
    }
};