int count(int n){
            int ans=0;
            while(n>=5){
                ans+=(n/5);
                n/=5;
            }
            return ans;
        }
        int findNum(int n)
        {
            int l=0,h=1e7;
            int m;
            while(l<=h){
                m=(l+h)/2;
                int c=count(m);
                if(c>=n){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            return m+min(m%5,5-(m%5));
        }
