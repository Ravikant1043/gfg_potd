class Solution {
  public:
   long long reversedBits(long long x) {
        long long ans=0,i=0;
        while(i<31){
            if(x&(1ll<<i)){
                ans|=(1ll<<(31-i));
            }
            i++;
        }
        return ans;
    }
};
