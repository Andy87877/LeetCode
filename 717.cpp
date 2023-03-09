// https://leetcode.com/problems/1-bit-and-2-bit-characters/description/
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool check = false;
        for (int i = 0; i < bits.size()-1; i++) {
            if (check) {
                check = false;
            } else {
                if (bits[i] == 1) check = true;
            }
        }
        return (!check);
    }
};
