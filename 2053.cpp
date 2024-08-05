// https://leetcode.com/problems/kth-distinct-string-in-an-array/description/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> ma;
        for (auto i: arr){
            ma[i]++;
        }

        int time = 0;
        for (auto i: arr){
            if (ma[i] == 1){
                time++;
                if (time == k) return i;
            }
        }

        return "";
    }
};
