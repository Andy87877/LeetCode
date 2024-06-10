// https://leetcode.com/problems/height-checker/description/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sort_vec = heights;
        sort(sort_vec.begin(), sort_vec.end());

        int ans = 0;
        for (int i = 0; i < heights.size(); i++){
            if (heights[i] != sort_vec[i]){
                ans++;
            }
        }
        return ans;
    }
};