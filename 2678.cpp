// https://leetcode.com/problems/number-of-senior-citizens/description/
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for (auto s: details){
            if (((int(s[11])-int('0'))*10 + (int(s[12])-int('0'))) > 60){
                ans++;
            }
        }
        return ans;
    }
};
