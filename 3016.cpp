// https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/
// 找重複的次數 --> 排序 --> 前9多*1 後9個*2 再後面9個*3 ..... --> 總和就是答案
class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> ma;
        for (char i: word){
            ma[i]++;
        }

        vector<int> times;
        for (auto i: ma){
            times.push_back(i.second);
        }
        sort(times.begin(), times.end());

        int ans, check = 1, mul = 1;

        ans = times[times.size()-1];
        for (int i = times.size()-2; i >= 0; i--){
            cout << times[i] << " ";
            
            if ((check % 8) == 0){
                mul++;
            }
            check++;

            ans += mul*times[i];

            // cout << mul << "*" << times[i] << "\n";
        }

        return ans;
    }
};
