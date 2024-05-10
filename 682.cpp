// https://leetcode.com/problems/baseball-game/description/
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        int tmp;
        for (auto now: operations){
            // cout << now << " ";
            if (now == "+"){
                tmp = vec[vec.size()-1]+ vec[vec.size()-2];
                vec.push_back(tmp);
            } else if (now == "D"){
                tmp = vec[vec.size()-1]*2;
                vec.push_back(tmp);
            } else if (now == "C"){
                vec.pop_back();
            } else {
                tmp = 0;
                string st = now;

                if (st[0] != '-'){
                    tmp += (int(st[0])-48);
                }
                for (int i = 1; i < st.size(); i++){
                    tmp *= 10;
                    tmp += (int(st[i])-48);
                }

                if (st[0] == '-'){
                    tmp *= -1;
                }
                vec.push_back(tmp);
            }

            // for (auto i: vec){
            //     cout << i << " ";
            // }
            // cout << "\n";
        }

        int ans = 0;
        for (auto i: vec){
            cout << i << " ";
            ans += i;
        }
        return ans;
    }
};