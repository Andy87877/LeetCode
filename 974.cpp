// https://leetcode.com/problems/subarray-sums-divisible-by-k/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;

        vector<int> cnt(k);
        cnt[0] = 1;

        for (int i: nums){
            sum += i;
            int remain = sum%k;
            if (remain < 0) remain += k;

            ans += cnt[remain]++;
        }

        return ans;
    }
};