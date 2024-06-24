// https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/description/
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int diff[n+1];
        memset(diff, 0, sizeof(diff));

        int ans = 0, tmp = 0;

        for (int i = 0; i < n; i++){
            tmp += diff[i];
            if (nums[i]+tmp%2 == 1){ //不用變
                continue;
            }

            if (i+k-1 >= n) return -1;

            //要變
            ans++;
            tmp++;
            diff[i+k]--;
        }

        return ans;
    }
};
/*
由前往後
看到0就翻 翻後面K-1個
如果到底還有0的 那就return-1

太大用差分 diff
換的區間[s,e]
diff[s]++ diff[e+1]--
*/