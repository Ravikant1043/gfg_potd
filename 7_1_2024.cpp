  public:
    bool help(int arr[],int mid,int n,int k){
        int c=1,s=0;
        for(int i=0;i<n;i++){
            if(s+arr[i]>mid){
                c++;
                s=arr[i];
            }
            else s+=arr[i];
        }
        return c<=k;
    }
    
    int splitArray(int arr[] ,int n, int k) {
        int mi=INT_MIN;
        int s=0;
        for(int i=0;i<n;i++){
            mi=max(mi,arr[i]);
            s+=arr[i];
        }
        if(k==1)return s;
        int ans=mi;
        while(mi<=s){
            int mid=(s+mi)/2;
            if(help(arr,mid,n,k)){
                ans=mid;
                // cout<<ans<<" ";
                s=mid-1;
            }
            else{
                mi=mid+1;
            }
            // cout<<s<<" "<<mi<<"\n";
        }
        // cout<<mi<<" "<<s<<" ";
        return ans;
    }
};
