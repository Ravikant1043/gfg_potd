typedef long long ll;
class Solution{
public:
int mod=1e9+7;
int val=1;
    ll help(int t,int j){
        if(j==t+1)return 0;
        ll ans=1;
        for(int i=0;i<j;i++,val++){
            ans=(ans%mod*val%mod)%mod;
            ans%=mod;
        }
        return (ans+help(t,j+1))%mod;
    }
    ll sequence(int n){
          return help(n,1);
    }
};
