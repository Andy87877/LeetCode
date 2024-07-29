// https://leetcode.com/problems/count-number-of-teams/description/
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0;
        for (int i = 0; i < rating.size()-2; i++){
            for (int j = i+1; j < rating.size()-1; j++){
                for (int k = j+1; k < rating.size(); k++){
                    // cout << rating[i] << " " << rating[j] << " " << rating[k] << "\n";
    
                    if (rating[i] < rating[j] && rating[j] < rating[k]){
                        ans++;
                    }
                    if (rating[i] > rating[j] && rating[j] > rating[k]){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
