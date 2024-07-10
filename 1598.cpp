// https://leetcode.com/problems/crawler-log-folder/
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for (int i = 0; i < logs.size(); i++){
            // cout << ans << " ";
            if (logs[i] == "../"){
                ans = max(ans-1, 0);
            } else if (logs[i] != "./"){
                ans++;
            }
        }
        return ans;
    }
};