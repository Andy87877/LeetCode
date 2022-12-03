// https://leetcode.com/problems/sort-characters-by-frequency/
/*
Runtime: 19 ms, faster than 71.68% of C++ online submissions for Sort Characters By Frequency.
Memory Usage: 8.6 MB, less than 40.07% of C++ online submissions for Sort Characters By Frequency.
*/
// 就先算次數 然後沒了cool 很簡單
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> ma;
        for (auto i: s) {
            ma[i]++;
        }
        
        vector<int> times, str;
        for (auto i: ma) {
            str.push_back(i.first);
        }
        for (auto i: ma) {
            times.push_back(i.second);
        }
        
        for (int i = 0; i < times.size(); i++) {
            for (int j = i+1; j < times.size(); j++) {
                if (times[i] < times[j]) {
                    swap(times[i],times[j]);
                    swap(str[i],str[j]);
                }
            }
        }
        
        string ans = "";
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < times[i]; j++) {
                ans += str[i];
            }
        }
        return ans;
    }
};