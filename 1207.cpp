// https://leetcode.com/problems/unique-number-of-occurrences/
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Number of Occurrences.
Memory Usage: 8.3 MB, less than 6.37% of C++ online submissions for Unique Number of Occurrences.
*/
// 這題蠻簡單的 只要先判斷出現幾次 在判斷出現次數是否有重複就好
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> ma;
        for (auto i: arr) {
            ma[i]++;
        }
        
        map<int,int> check;
        for (auto i: ma) {
            check[i.second]++;
            if (check[i.second] == 2) {
                return false;
            }
        }
        return true;
    }
};