// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
class Solution {
public:
    int countOdds(int low, int high) {
        return (high-low)/2+1-(low%2 == 0 && high % 2 == 0);
    }
};