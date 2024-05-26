// https://leetcode.com/problems/the-number-of-beautiful-subsets/description/
class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<vector<int>> order;
        order.push_back({});

        for (int i = 0; i < nums.size(); i++){
            int m = order.size();
            for (int j = 0; j < m; j++){
                vector<int> tmp;
                tmp = order[j];
                
                // judge 
                bool flag = true;
                // cout << "test\n";
                if (tmp.size() >= 1){
                    for (int a = 0; a < tmp.size(); a++){
                        if (abs(nums[i] - tmp[a]) == k){
                            flag = false;
                            break;
                        }
                    }
                }

                if (flag){
                    tmp.push_back(nums[i]);
                    order.push_back(tmp);

                    // for (auto bbb: tmp){
                    //     cout << bbb << "　"; 
                    // }
                    // cout << "\n";
                }
            } 
        }

        return order.size()-1;
    }
};