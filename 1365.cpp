// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());
        
        map<int, int> ma;
        for (int i = 0; i < vec.size(); i++){
            if (ma[vec[i]] == 0){
                ma[vec[i]] = i+1;
            }
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            ans.push_back(ma[nums[i]]-1);
        }

        return ans;
    }
};