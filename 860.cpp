// https://leetcode.com/problems/lemonade-change/description/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int arr[20];
        memset(arr, 0, sizeof(arr));

        for (auto now: bills){
            cout << arr[5] << " " << arr[10] << "   " << now << "\n";
            if (now == 5){
                arr[5]++;
            } else if (now == 10){
                if (arr[5] == 0){
                    return false;
                }
                arr[5]--;
                arr[10]++;
            } else {
                if (arr[10] == 0){
                    if (arr[5] < 3){
                        return false;
                    }
                    arr[5] -= 3;
                } else {
                    if (arr[5] == 0){
                        return false;
                    }
                    arr[5]--;
                    arr[10]--;
                }
            }
        }

        
        return true;
    }
};
