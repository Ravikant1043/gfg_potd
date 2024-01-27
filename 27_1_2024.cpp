class Solution{
public:
    pair<string,int> help(int i,int j,int arr[],vector<vector<pair<string,int>>> &dp){
        // if(i==j)return {("A"+(i-1)),0};
        if(i==j){
            string a="";
            char s='A'+(i-1);
            a+=s;
            return {a,0};
        }
        if(dp[i][j].second!=-1)return dp[i][j];
        int ans=INT_MAX;
        string ss="";
        for(int k=i;k<j;k++){
            int s=(arr[i-1]*arr[k]*arr[j]);
            pair<string,int> a=help(i,k,arr,dp);
            pair<string,int> b=help(k+1,j,arr,dp);
            // ans=min(ans,s+help(i,k,arr,dp)+help(k+1,j,arr,dp));
            // char f=(i-1)+'A';
            // char se=k+'A';
            // ss= "(";//+f+se+")";
            // ss+=f;
            // ss+=se;
            // ss+=")";
            if(ans>=(s+a.second+b.second)){
                ans=s+a.second+b.second;
                ss="("+a.first+b.first+")";
            }
        }
        return dp[i][j]={ss,ans};
    }
    string matrixChainOrder(int p[], int N){
        
        vector<vector<pair<string,int>>> dp(N+1,vector<pair<string,int>>(N+1,{"",-1}));
        pair<string,int>ans= help(1,N-1,p,dp);
        // cout<<ans.first<<" "<<ans.second<<" ";
        return ans.first;
    }
};
