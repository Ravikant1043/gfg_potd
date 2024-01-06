class Solution {
public:
    bool isprime(int n){
        if(n<=1)return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int nn=200005;
    
    vector<int>prime;
    
    void primeSieve()
    {
        prime.resize(nn+2,0);
        prime[1]=1;
        for (int i = 2; i <= nn; i++)
        {
            if (prime[i] == 0)
            {
                for (int j = i + i; j <= nn; j += i)
                {
                    prime[j]++;
                }
            }
        }
        // int a[6]={19,12,14,6,10,18};
        // for(int i=0;i<6;i++)cout<<prime[a[i]]<<" ";
        // cout<<prime[300];
        return;
    }
    int help(int n){
        int c=0;
        int p=n;
        for(int i=2;i<=sqrt(p) && p>1;i++){
            while(p%i==0){
                p/=i;
                c++;
            }
            if(prime[p]==0){return c+1;}
        }
        
        return c;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    nn=b;
	    primeSieve();
	    int ans=0,c;
	    for(int i=a;i<=b;i++){
	        if(i==1)continue;
	        if(i==2 || i==3){
	            ans++;
	            continue;
	        }
	        c=help(i);
	       // cout<<c<<" ";
	        ans+=c;
	    }
	    return ans;
	}
};
