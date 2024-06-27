// https://leetcode.com/problems/find-center-of-star-graph/
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> ma;
        for (int i = 0; i < 2; i++){
            ma[edges[i][0]]++;
            ma[edges[i][1]]++;
        }

        for (auto i: ma){
            if (i.second == 2){
                return i.first;
            }
        }

        return 0;
    }
};