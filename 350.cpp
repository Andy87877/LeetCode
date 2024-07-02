// https://leetcode.com/problems/intersection-of-two-arrays-ii/description
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ma1, ma2;
        for (auto i: nums1){
            ma1[i]++;
        }
        for (auto i: nums2){
            ma2[i]++;
        }

        vector<int> ans;
        for (auto i: ma1){
            int times1 = i.second, times2 = ma2[i.first];
            for (int j = 0; j < min(times1, times2); j++){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};
