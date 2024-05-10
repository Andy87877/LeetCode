// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int> vec = arr;
        sort(vec.begin(), vec.end());

        int gap = vec[1]-vec[0];
        for (int i = 0; i < vec.size()-1; i++){
            if (vec[i+1]-vec[i] != gap) return false;
        }
        return true;
    }
};