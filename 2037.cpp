/*
https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/submissions/
https://leetcode.com/submissions/detail/643967623/
Runtime: 16 ms, faster than 36.53% of C++ online submissions for Minimum Number of Moves to Seat Everyone.
Memory Usage: 18.2 MB, less than 44.09% of C++ online submissions for Minimum Number of Moves to Seat Everyone.
*/
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int total = 0;
        for (int i = 0; i < seats.size(); i++) {
            total += abs(students[i]-seats[i]);
        }
        return total;
    }
};
