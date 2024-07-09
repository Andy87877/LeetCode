// https://leetcode.com/problems/average-waiting-time/description/
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long now = 0, total = 0;
        for (int i = 0; i < customers.size(); i++){
            if (customers[i][0] >= now){
                now = customers[i][0]+customers[i][1];
            } else {
                now += customers[i][1];
            }

            total += (now - customers[i][0]);
            // cout << now << " " << customers[i][0] << endl;
        }
        
        double ans = (total*1.00000000)/customers.size();
        return ans;
    }
};