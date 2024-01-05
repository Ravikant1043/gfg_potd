long long a=2,b=3;
	    if(N==1)return 4;
	    if(N==2)return 9;
	    long long n;
	    for(int i=3;i<=N;i++){
	        n=(a+b)%mod;
	        a=b%mod;
	        b=n%mod;
	    }
	    return ((n%mod)*(n%mod))%mod;
