// https://leetcode.com/problems/find-the-pivot-integer/description/
class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;
        int total = (n+1)*n/2;
        int front = total-n, back = n;

        for (int i = n-1; i >= 1; i--){
            back += i;
            if (front == back){
                return i; 
            } else if (front < back) {
                return -1;
            }
            front -= i;
            
        }
        return -1;
    }
};