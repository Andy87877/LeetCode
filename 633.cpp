//
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = sqrt(c); a >= 0; a--){
            for (long long b = a; b >= 0; b--){
                long long tmp = a*a+b*b;
                if (tmp == c) return true;
                if (tmp < c) break;
            }
        }
        return false;
    }
};