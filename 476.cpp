// https://leetcode.com/problems/number-complement/description/
class Solution {
public:
    int findComplement(int num) {
        int n = num;
        vector<int> vec_test;

        while (n != 0){
            vec_test.push_back(n%2);
            n /= 2;
        }

        vector<int> vec_change;
        for (int i = vec_test.size()-1; i >= 0; i--){
            vec_change.push_back(-1*vec_test[i] + 1);
        }

        int ans = 0;
        for (auto i: vec_change){
            ans *= 2;
            ans += i;
        }
        return ans;
    }
};
