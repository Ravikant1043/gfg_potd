class Solution{
    public:
        int vertexCover(int n, vector<pair<int, int>> &e) {
            int ans=(2<<17);
            for(int i=0;i<(2<<n);i++){
                int c=0;
                for(int j=0;j<e.size();j++){
                    if((i&(1<<(e[j].first-1))) || (i&(1<<(e[j].second-1)))){
                        c++;
                    }
                }
                if(c==e.size())ans=min(ans,__builtin_popcount(i));
            }
            return ans;
        }
};
