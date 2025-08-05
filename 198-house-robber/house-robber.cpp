class Solution {
    int solve(vector<int>&nums,int n,vector<int>&dp)
    {
        if(n<0)return 0;
        if(n==0)return nums[0];

        if(dp[n]!=-1)return dp[n];

        int inc = solve(nums,n-2,dp)+nums[n];
        int exc = solve(nums,n-1,dp)+0;

        dp[n] = max(inc,exc);
        return dp[n];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int>dp(n+1,-1);
        int ans = solve(nums,n,dp);
        return ans;
    }
};