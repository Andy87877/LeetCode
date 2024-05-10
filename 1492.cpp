// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary
class Solution {
public:
    double average(vector<int>& salary) {
        vector<int> vec = salary;
        sort(vec.begin(), vec.end());
        int total = 0;
        for (int i = 1; i < vec.size()-1; i++) total += vec[i];

        return (double(total)/double(vec.size()-2));
    }
};