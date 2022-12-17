// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
// https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/861026011/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<long long> vec;
        long long temp;
        for (auto i: tokens) {
            cout << i << "  ";
            if (i == "+") {
                temp = vec[vec.size()-1];
                vec.pop_back();
                vec[vec.size()-1] += temp;
            } else if (i == "-") {
                temp = vec[vec.size()-1];
                vec.pop_back();
                vec[vec.size()-1] -= temp;
            } else if (i == "*") {
                temp = vec[vec.size()-1];
                vec.pop_back();
                vec[vec.size()-1] *= temp;
            } else if (i == "/") {
                temp = vec[vec.size()-1];
                vec.pop_back();
                vec[vec.size()-1] /= temp;
            } else {
                vec.push_back(stoi(i));
            }
            // cout << vec[vec.size()-1] << " " << temp << "\n";
        }

        return vec[0];
    }
};