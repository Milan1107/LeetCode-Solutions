class Solution {
public:
    int fibodp(int n, vector<int>&dp)
    {
        if(n<=1)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=fibodp(n-1,dp)+fibodp(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        int ans = fibodp(n,dp);
        return ans;
    }
};