class Solution{
public:
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    vector<int>a(30,0);
	    long long ans=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<30;j++){
	            if((arr[i]&(1<<j)))a[j]++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<30;j++){
	            if(arr[i]&(1<<j)){
	                int t=a[j]-1;
	                ans+=((n-1-t));
	            }
	            else ans+=(a[j]);
	        }
	    }
	    return ans;
	}
};
