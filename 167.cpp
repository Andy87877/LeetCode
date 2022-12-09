// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/857163779/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> ma;
        for (int i = 0; i < numbers.size(); i++) {
            ma[numbers[i]]++;
            if (ma[numbers[i]] == 1) {
                for (int j = i+1; j < numbers.size(); j++) {
                    if (numbers[i]+numbers[j] == target){
                        return {i+1,j+1};
                    }
                }
            }
        }
        return {-1,-1};
    }
};