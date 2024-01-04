vector<int>dp(32,0);
        for(int i=0;i<N;i++){
            for(int j=31;j>=0;j--){
                if(arr[i]&(1<<j))dp[j]++;
            }
        }
        int ans=0;
        for(int i=31;i>=0;i--){
            if(dp[i]%3!=0)ans=(ans|(1<<i));
        }
        return ans;
