class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        vector<int>v(64,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<63;j++)
            if(arr[i]&(1ll<<j))v[j]++;
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<63;j++){
                if(arr[i]&(1ll<<j)){
                    v[j]--;
                    ans+=(v[j]*(1ll<<j));
                }
            }
        }
        return ans;
    }
};
