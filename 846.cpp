// https://leetcode.com/problems/hand-of-straights/description/
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size()%groupSize != 0) return false;

        map<int,int> ma;
        queue<int> qu;

        for (int i = 0; i < hand.size(); i++){
            ma[hand[i]]++;
        }
        for (auto i: ma){
            qu.push(i.first);
        }

        while(qu.size() != 0){
            int now = qu.front();
            int times = ma[now];
            for (int j = now; j < now+groupSize; j++){
                if (ma[j] < times) return false;
                ma[j] -= times;
                if (ma[j] == 0) {
                    if (qu.front() == j) {
                        qu.pop();
                    } else {
                        return false;
                    }
                }
            }
        }

        return true;

    }
};