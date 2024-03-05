class Solution{
    public:
    int maxIndexDiff(int arr[], int n) 
    { 
        int maxi[n];
       maxi[n-1]=arr[n-1];
       
       for(int i=n-2;i>=0;i--){
           maxi[i]=max(arr[i],maxi[i+1]);
       }
       
       int cnt=0;
       for(int i=0,j=0;i<n && j<n;){
           if(arr[i]<=maxi[j]){
               cnt=max(cnt,j-i);
               j++;
           }
           else{
               i++;
           }
       }
       return cnt;
    }
};
