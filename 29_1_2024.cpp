class Solution{
	public:
	int help(int i,int pre,int &n,string &s,vector<vector<int>> &dp){
	    if(i==n)return 1;
	    int ans=0;
	    if(dp[i][pre+1]!=-1)return dp[i][pre+1];
	    if(pre==-1){
	        int sum=0;
	        for(int j=i;j<n;j++){
	            sum+=(s[j]-'0');
	            ans+=help(j+1,sum,n,s,dp);   
	        }
	    }
	    if(pre!=-1){
	        int sum=0;
	        for(int j=i;j<n;j++){
	            sum+=(s[j]-'0');
	            if(sum>=pre)
	            ans+=help(j+1,sum,n,s,dp);   
	        }
	    }
	    return dp[i][pre+1]=ans;
	}
	int TotalCount(string s){
	    int i=0,n=s.size();
	    int sum=0;
	    for(auto it:s)sum+=(it-'0');
	    vector<vector<int>> dp(n+1,vector<int>(sum+2,-1));
	    return help(i,-1,n,s,dp);
	}
};
