// https://leetcode.com/problems/get-equal-substrings-within-budget/description/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> vec;
        int n = s.size();
        for (int i = 0; i < n; i++){
            int num = abs(int(s[i]) - int(t[i]));
            vec.push_back(num);
        }

        int cost, ans = 0, tmp;
        for (int i = 0; i < n; i++){
            cost = 0;
            tmp = 0;
            for (int j = i; j < n; j++){
                cost += vec[j];
                if (cost > maxCost){
                    break;
                }
                tmp++;
            }
            // cout << tmp << " ";
            ans = max(ans, tmp);
        }

        return ans;
    }
};