// https://leetcode.com/problems/minimum-average-difference/
/*
Runtime: 1227 ms, faster than 5.32% of C++ online submissions for Minimum Average Difference.
Memory Usage: 78.3 MB, less than 76.81% of C++ online submissions for Minimum Average Difference.
*/
/*
這一題沒有很難
但會忘記/0的部分
*/
#define ll long long
class Solution {
public:
    ll abs(ll n) {
        if (n < 0) return n*-1;
        return n;
    }
    int minimumAverageDifference(vector<int>& nums) {
        ll a = nums[0] ,b = 0; //前.後 總數
        for (auto i: nums) {
            b += i;
        }
        b -= a;
        
        ll temp, ans = 0, min = 99999999;
        for (ll i = 1; i < nums.size(); i++) {
            temp = abs(a/i - b/(nums.size()-i));
            cout << temp << "\n";
            if (min > temp) {
                min = temp;
                ans = i-1;
            }
            a += nums[i];
            b -= nums[i];
        }
        temp = abs(a/nums.size());
        cout << temp << "\n";
        if (min > temp) {
            min = temp;
            ans = nums.size()-1;
        }
        
        return ans;
    }
};