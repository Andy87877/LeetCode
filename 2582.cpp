// https://leetcode.com/problems/pass-the-pillow/
class Solution {
public:
    int passThePillow(int n, int time) {
        // cout << n << " " << time << "\n";

        time %= (n*2-2);

        // cout << time << " ";
        
        if (time <= n-1) return time+1;

        // cout << "ha";
        return (n*2-1)-time;
    }
};
/*
n = 4
num  1 -> 2 -> 3 -> 4 -> 3 -> 2 -> 1      -> 2 -> 3 -> 4 -> 03 -> 02 -> 01
time 0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6      -> 7 -> 8 -> 9 -> 10 -> 11 -> 12 
*/