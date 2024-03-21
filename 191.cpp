// https://leetcode.com/problems/number-of-1-bits/description/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total = 0;
        while (n != 0){
            //cout << n << "\n";
            if (n%2 == 1) total++;
            n/=2;
        }
        return total;
    }
};
