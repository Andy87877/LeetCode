// https://leetcode.com/problems/valid-perfect-square/description/
// https://leetcode.com/problems/valid-perfect-square/submissions/860641880/
class Solution { 
public:
    bool isPerfectSquare(int num) {
        for (long long i = 0; i <= num; i++) {
            if (i*i == num) return true;
            if (i*i > num) return false;
        }
        return false;
    }
};