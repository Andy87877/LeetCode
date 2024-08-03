// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> ma1, ma2;
        for (auto i: target){
            ma1[i]++;
        }
        for (auto i: arr){
            ma2[i]++;
        }

        if (ma1.size() != ma2.size()) return false;

        for (auto i: ma1){
            if (i.second != ma2[i.first]){
                return false;
            }
        }
        return true;
    }
};
