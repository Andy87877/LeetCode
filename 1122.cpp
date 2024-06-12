// https://leetcode.com/problems/relative-sort-array/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> ma_arr1;
        map<int,int> ma_arr2;
        for (int i: arr1){
            ma_arr1[i]++;
        }

        vector<int> ans;

        for (int i: arr2){
            for (int j = 0; j < ma_arr1[i]; j++){
                ans.push_back(i);
            }
            ma_arr2[i]++;
        }

        vector<int> tmp;
        for (auto i: ma_arr1){
            if (ma_arr2[i.first] == 0){
                for (int j = 0; j < ma_arr1[i.first]; j++){
                    tmp.push_back(i.first);
                }
            }
        }
        sort(tmp.begin(), tmp.end());

        for (int i: tmp){
            ans.push_back(i);
        }
        return ans;
    }
};