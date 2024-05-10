// https://leetcode.com/problems/min-max-game/
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int> now = nums, tmp;

        while (now.size() != 1){
            tmp.clear();
            for (int i = 0; i < now.size(); i+=2){
                if (tmp.size()%2 == 0){
                    tmp.push_back(min(now[i], now[i+1]));
                } else {
                    tmp.push_back(max(now[i], now[i+1]));
                }
            }
            now = tmp;
        }

        return now[0];
    }
};