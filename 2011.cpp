/*
https://leetcode.com/problems/final-value-of-variable-after-performing-operations/submissions/
https://leetcode.com/submissions/detail/643991703/
Runtime: 8 ms, faster than 81.20% of C++ online submissions for Final Value of Variable After Performing Operations.
Memory Usage: 14.1 MB, less than 58.94% of C++ online submissions for Final Value of Variable After Performing Operations.
*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int total = 0;
        for (string i: operations) {
            if (i[1] == '+') {
                total++;
            } else {
                total--;
            }
        }
        return total;
    }
};
