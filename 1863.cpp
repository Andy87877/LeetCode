// https://leetcode.com/problems/sum-of-all-subset-xor-totals/
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        // sort Subset
        vector<vector<int>> order;
        order.push_back({});

        for (int i = 0; i < nums.size(); i++){
            int m = order.size();
            for (int j = 0; j < m; j++){
                vector<int> tmp;
                tmp = order[j];
                tmp.push_back(nums[i]);
                order.push_back(tmp);
            }
        }

        //XOR
        int ans = 0;
        for (int i = 1; i < order.size(); i++){
            vector<int> now = order[i];
            int tmp = now[0];
            for (int j = 1; j < now.size(); j++){
                tmp ^= now[j];
            }
            ans += tmp;
        }

        return ans;
    }
};
// empty 0 1 0,1 2 0,2 0,1 0,1,2;