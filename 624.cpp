// https://leetcode.com/problems/maximum-distance-in-arrays/
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        vector<int> max_vec, min_vec;
        int n = arrays.size();
        int mx = -1000000, mi = 1000000;

        for (vector<int> vec: arrays){
            int max_num = vec[vec.size()-1], min_num = vec[0];
            mx = max(mx, max_num);
            mi = min(mi, min_num);
            max_vec.push_back(max_num);
            min_vec.push_back(min_num);
        }

        int ans = -1;
        for (int i = 0; i < n; i++){
            if (mx == max_vec[i]){
                for (int j = 0; j < n; j++){
                    if (i != j){
                        ans = max(ans, mx-min_vec[j]);
                    }
                }
            }
            if (mi == min_vec[i]){
                for (int j = 0; j < n; j++){
                    if (i != j){
                        ans = max(ans, max_vec[j]-mi);
                    }
                }
            }
        }

        return ans;
    }
};
/* 
find max_vec mx index and find min_vec mi index
if same index
get second max and min num
then contrast who distance was bigger then it was answer
*/
