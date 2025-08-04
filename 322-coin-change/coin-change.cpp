class Solution {
    // int solve(vector<int>&coins, int n)
    // {
    //     if(n==0)return 0;
    //     if(n<0)return INT_MAX;
    //     int mini = INT_MAX;
    //     for(int i = 0;i<coins.size();i++)
    //     {
    //         int ans = solve(coins,n-coins[i]);
    //         if(ans!=INT_MAX){
    //             mini = min(mini,1+ans);
    //         }
    //     }
    //     return mini;
    // }
    int solveTab(vector<int>&nums,int n)
    {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i-nums[j]>=0 && dp[i-nums[j]]!=INT_MAX){
                    dp[i] = min(dp[i],1+dp[i-nums[j]]);
                }
            }
        }
        if(dp[n]==INT_MAX) return -1;
        return dp[n];
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int res = solveTab(coins,amount);
        return ((res==INT_MAX)?-1:res);
    }
};