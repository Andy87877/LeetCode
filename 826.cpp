// https://leetcode.com/problems/most-profit-assigning-work/description/
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // profit sort
        int n = profit.size();
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (profit[i] < profit[j]){
                    swap(profit[i],profit[j]);
                    swap(difficulty[i],difficulty[j]);
                }
            }
        }

        int mi = difficulty[0];
        for (int i = 0; i < n; i++){
            mi = min(mi, difficulty[i]);
            cout << difficulty[i] << " " << profit[i] << "\n";
        }
        cout << endl;
        
        int ans = 0;
        int m = worker.size();
        for (int i = 0; i < m; i++){
            if (mi > worker[i]){ //cant work
                continue;
            }

            for (int j = 0; j < n; j++){
                if (difficulty[j] <= worker[i]){
                    ans += profit[j];
                    break;
                }
            }
        }

        return ans;
    }
};