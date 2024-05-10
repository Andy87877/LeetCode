// https://leetcode.com/problems/k-th-smallest-prime-fraction/
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> vec;
        for (int i = 0; i < arr.size(); i++){
            for (int j = i+1; j < arr.size(); j++){
                vec.push_back(float(arr[i])/float(arr[j]));
            }
        }

        sort(vec.begin(), vec.end());
        double ans = vec[k-1];
        cout << ans << "\n";

        for (int i = 0; i < arr.size(); i++){
            for (int j = i+1; j < arr.size(); j++){
                if (float(arr[i])/float(arr[j]) == ans){
                    return {arr[i], arr[j]};
                }
            }
        }

        return{0,0};
    }
};
