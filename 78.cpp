// https://leetcode.com/problems/subsets/description/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for (int i = 0; i < nums.size(); i++){
            int m = ans.size();
            for (int j = 0; j < m; j++){
                vector<int> tmp;
                tmp = ans[j];
                tmp.push_back(nums[i]);
                ans.push_back(tmp);
            }

        }
        return ans;
    }
};

/*
empty
1: empty 1
2: empty 1 --> 2 1.2
3: empty 1 2 1.2 --> 3 1.3 2.3 1.2.3 
*/