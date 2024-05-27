// https://leetcode.com/problems/summary-ranges/description/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0) return {};
        int start = nums[0], tmp = nums[0];
        vector<string> ans;

        for (int i = 1; i < nums.size(); i++){

            bool flag = false;
            if (tmp+1 != nums[i]){
                string s = to_string(start);
                if (start != tmp){
                    s += "->";
                    s += to_string(tmp);
                }
                ans.push_back(s);

                flag = true;
                start = nums[i];
            }
            tmp = nums[i];
        }
        
        string s = to_string(start);
        if (start != tmp){
            s += "->";
            s += to_string(tmp);
        }
        ans.push_back(s);

        return ans;
    }
};