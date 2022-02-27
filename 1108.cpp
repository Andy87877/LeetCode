/*
https://leetcode.com/problems/defanging-an-ip-address/submissions/
https://leetcode.com/submissions/detail/649601955/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 6.1 MB, less than 22.73% of C++ online submissions for Defanging an IP Address.
*/
class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for (auto i: address) {
            if (i == '.') {
                s += "[.]";
            } else {
                s += i; 
            }
        }
        return s;
    }
};
