class Solution {

    // < -----     Memoization Approach    ----- >

    // int solve(vector<int>&nums,int n,vector<int>&dp)
    // {
    //     if(n<0)return 0;
    //     if(n==0)return nums[0];

    //     if(dp[n]!=-1)return dp[n];

    //     int inc = solve(nums,n-2,dp)+nums[n];
    //     int exc = solve(nums,n-1,dp)+0;

    //     dp[n] = max(inc,exc);
    //     return dp[n];
    // }

    // < -----     Tabulation Method ----- >
    // int solveTab(vector<int>&nums)
    // {
    //     int n = nums.size();
    //     if(n==0)return 0;
    //     if(n==1)return nums[0];

    //     vector<int>dp(n,0);

    //     dp[0]=nums[0];
    //     dp[1]=max(nums[0],nums[1]);
    //     int inc,exc;

    //     for(int i=2;i<n;i++)
    //     {
    //         inc = dp[i-2]+nums[i];
    //         exc = dp[i-1];
    //         dp[i] = max(inc,exc);
    //     }
    //     return dp[n-1];
    // }

    int solve(vector<int>&nums)
    {
        int n = nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];

        // vector<int>dp(n,0);

        int prev, preprev;
        preprev=nums[0];
        prev=max(nums[0],nums[1]);
        int inc,exc,dp;
        dp = prev;

        for(int i=2;i<n;i++)
        {
            inc = preprev+nums[i];
            exc = prev;
            dp = max(inc,exc);
            preprev = prev;
            prev = dp;
        }
        return dp;
    }
public:
    int rob(vector<int>& nums) {
        // int n = nums.size()-1;
        // vector<int>dp(n+1,-1);
        // int ans = solve(nums,n,dp);

        // int ans = solveTab(nums);

        int ans = solve(nums);
        return ans;
    }
};