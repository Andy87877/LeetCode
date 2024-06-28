// https://leetcode.com/problems/maximum-total-importance-of-roads/description/
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> vec(n);

        for (vector<int> tmp: roads){
            vec[tmp[0]]++;
            vec[tmp[1]]++;
        }

        sort(vec.begin(), vec.end());

        long long ans = 0;
        for (long long i = 0; i < n; i++){
            ans += vec[i]*(i+1);
        }

        return ans;
    }
};
/*
找相鄰的數量 然後排序次數 最終乘起來
*/