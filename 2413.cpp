// https://leetcode.com/problems/smallest-even-multiple/description/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n*(n%2+1);
    }
};