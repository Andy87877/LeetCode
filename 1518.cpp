// https://leetcode.com/problems/water-bottles/
// https://leetcode.com/problems/water-bottles/submissions/862179052/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0, empty = 0, full = numBottles;
        while (full != 0) { 
            cout << full << " " << empty << "\n";
            ans += full;
            empty += full;
            full = empty/numExchange;
            empty -= full*numExchange;
        }
        return ans;
    }
};