// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
/*
s_last == 1 --> odd
從後面往前 直到遇到0
1101 --> 1110
1011 --> 1100

s_last == 0 --> even
1110 --> 111
*/
class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        // cout << s << "\n";

        while (s != "1"){
            ans++;
            // for (auto i: s){
            //     cout << i;
            // }
            // cout << "\n";

            if (s[s.size()-1] == '1'){ //last = 1
                //check all 1?
                bool flag = true; 
                for (int i = s.size()-1; i >= 0; i--){
                    if (s[i] == '1'){
                        s[i] = '0';
                    } else {
                        s[i] = '1';
                        flag = false;
                        break;
                    }
                }
                if (flag){
                    s.insert(0,1,'1');
                }
            } else {  //last = 0
                s.pop_back();
            }
        }

        return ans;
    }
};
