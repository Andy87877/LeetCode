// https://leetcode.com/problems/flipping-an-image/description/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for (vector<int> now: image){
            vector<int> tmp;
            for (int i = now.size()-1; i >= 0; i--){
                tmp.push_back(abs(now[i]-1));
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};