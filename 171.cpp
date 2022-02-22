/*
https://leetcode.com/problems/excel-sheet-column-number/submissions/
https://leetcode.com/submissions/detail/646709873/
Runtime: 6 ms, faster than 19.43% of C++ online submissions for Excel Sheet Column Number.
Memory Usage: 5.9 MB, less than 67.10% of C++ online submissions for Excel Sheet Column Number.
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int total = 0;
        for (auto i: columnTitle) {
            total = total*26 + (i-'A'+1);
        }
        return total;
    }
};
