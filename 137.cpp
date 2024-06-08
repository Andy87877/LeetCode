// https://leetcode.com/problems/single-number-ii/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ma;
        set<int> se;
        for (int i: nums){
            ma[i]++;
            se.insert(i);
        }

        for (auto i: se){
            if (ma[i] == 1){
                return i;
            }
        }
        return -1;
    }
};