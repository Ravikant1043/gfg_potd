class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
            int mod=1e9+7;
           long long unsigned int ans=0;
           Node*t=head;
           while(t){
               if(t->data==1){
                ans=(ans+ans)%mod;
                ans=(ans+1)%mod;
               }
               else ans=(ans+ans)%mod;
               t=t->next;
           }
           return ans;
        }
};
