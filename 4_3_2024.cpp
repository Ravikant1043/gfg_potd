class Solution{
  public:
    void swapElements(int a[], int n){
        for(int i=0;i<n-2;i++){
            swap(a[i],a[i+2]);
        }
        
    }
};
