// https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int arr_XOR[n][n]; // i~j or j~k
        memset(arr_XOR, 0, sizeof(arr_XOR));

        for (int i = 0; i < n; i++){
            int tmp = arr[i];
            arr_XOR[i][i] = tmp;
            for (int j = i+1; j < n; j++){
                tmp ^= arr[j];
                arr_XOR[i][j] = tmp;
            }
        }


        int ans = 0;
        for (int i = 0; i < n; i++){
            for (int k = i+1; k < n; k++){
                for (int j = i+1; j <= k; j++){
                    if (arr_XOR[i][j-1] == arr_XOR[j][k]) {
                        // cout << i << " " << j << " " << k << "\n";
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};