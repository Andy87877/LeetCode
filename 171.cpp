/*
https://leetcode.com/problems/excel-sheet-column-number/submissions/
https://leetcode.com/submissions/detail/646815951/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Number.
Memory Usage: 5.9 MB, less than 92.06% of C++ online submissions for Excel Sheet Column Number.
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int total = 0;
        for (auto i: columnTitle) {
            total = (i-'A'+1) + total*26;
        }
        return total;
    }
};
