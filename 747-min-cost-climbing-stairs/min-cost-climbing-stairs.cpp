class Solution {
    int solve(vector<int>&cost,int pos,vector<int>&dp)
    {
        if(pos==0){dp[0] = cost[0];return dp[0];}
        if(pos==1){dp[1] = cost[1];return dp[1];}
        if(dp[pos]!=-1)return dp[pos];
        dp[pos] = cost[pos] + min(solve(cost,pos-1,dp),solve(cost,pos-2,dp));
        return dp[pos];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        int n = cost.size();
        int res = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return res;
    }
};