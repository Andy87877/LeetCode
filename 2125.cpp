// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if (bank.size() == 1) return 0;

        int arr[bank.size()];
        for (int i = 0; i < bank.size(); i++){
            arr[i] = 0;
            for (auto ch: bank[i]) {
                if (ch == '1') arr[i]++;
            }
        }

        int ans = 0;
        vector<int> vec;
        for (int i = 0; i < bank.size(); i++){
            if (arr[i] != 0) {
                vec.push_back(arr[i]);
            }
        }

        if (vec.size() == 0) return 0;
        for (int i = 0; i < vec.size()-1; i++){
            ans += (vec[i+1] * vec[i]);
        }

        return ans;
    }
};
