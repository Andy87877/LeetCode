// https://leetcode.com/problems/sort-array-by-increasing-frequency/description/
class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        map<int,int> ma;
        for (int i = 0; i < arr.size(); i++){
            ma[arr[i]]++;
        }

        vector<int> nums;
        vector<int> times;

        for (auto i: ma){
            nums.push_back(i.first);
            times.push_back(i.second);
        }

        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (times[i] > times[j]){
                    swap(nums[i], nums[j]);
                    swap(times[i], times[j]);
                } else if (times[i] == times[j]){
                    if (nums[i] < nums[j]){
                        swap(nums[i], nums[j]);
                        swap(times[i], times[j]);
                    }
                }
            }
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < times[i]; j++){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
