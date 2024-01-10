class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int>m;
	    int sum=0,ans=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int t=((sum%k)+k)%k;
	        if(t==0){
	            ans=max(ans,i+1);
	            continue;
	        }
	        if(m.find(t)==m.end())m[t]=i;
	       else ans=max(ans,i-m[t]);
	    }
	    
	    return ans;
	    }
	}
};
