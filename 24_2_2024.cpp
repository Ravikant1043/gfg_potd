class Solution
{
    public:
        int maxSum(int n)
        {
            vector<int>dp(n+1,0);
            for(int i=1;i<=n;i++){
                int t=0;
                t+=dp[i/2]+dp[i/3]+dp[i/4];
                dp[i]=max(i,t);
            }
            return dp[n];
        }
};
