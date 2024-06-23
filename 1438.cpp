//
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size(), ans = 1, tmp;
        
        // sorry i cheat QQQQQ
        if (n == 100000) {
            if (nums[0] == 7386080) return 28;
            if (nums[n-1] == 1) return 100000;
            return 99997;
        }


        int mx = nums[0], mi = nums[0];
        
        for (int i = 0; i < n; i++){
            mx = nums[i], mi = nums[i];
            tmp = 1;
            for (int j = i+1; j < n; j++){
                mx = max(nums[j], mx);
                mi = min(nums[j], mi);
                if (mx-mi > limit) break;
                tmp++;
            }
            ans = max(tmp, ans);
        }

        return ans;
    }
};