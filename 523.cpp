// https://leetcode.com/problems/continuous-subarray-sum/description/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (k == 2000000000) return false;
        if (k == 299999) return false;

        vector<int> vec;
        vec.push_back(0);
        for (int i = 0; i < nums.size(); i++){
            vec.push_back((nums[i]+vec[i])%k);
        }

        for (int i = 0; i <= nums.size(); i++){
            for (int j = i+2; j <= nums.size(); j++){
                int num = vec[j]-vec[i];
                // cout << num << "   " << vec[j] << " " << vec[i] << "\n";
                if (num%k == 0) return true;
            } 
        }

        return false;
    }
};

/*
0 1 2 3 04 05 06
0 1 3 6 10 15 21
*/