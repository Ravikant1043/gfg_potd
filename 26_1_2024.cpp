class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(const Item&a ,const Item &b){
        return (double)a.value/a.weight> (double)b.value/b.weight;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        double ans=0;
        for(int i=0;i<n;i++)
        {
            if(W-arr[i].weight>=0){
                W-=arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                ans+=(double)W/arr[i].weight*(double)arr[i].value;
                break;
            }
        }
        return ans;
        
    }
        
};
