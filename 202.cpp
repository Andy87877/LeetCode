// https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
        map<int, int> arr;
        while (n != 1 && arr[n] == 0) {
            arr[n] = 1;
            string str = to_string(n);
            int temp = 0;
            for (auto i: str) {
                temp += (int(i)-48)*(int(i)-48);
            }
            n = temp;
            cout << n << "\n";
        }
        return (n==1);
    }
};