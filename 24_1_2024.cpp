class Solution {
  public:
    bool dfs(int start,int vis[],vector<int>adj[],int v){
        vis[start]=1;
        for(auto &i:adj[start]){
            if(i!=v && vis[i]==1)return true;
            else if(!vis[i]){
                if(dfs(i,vis,adj,start))return true;   
            }
        }
        return false;
    }
    int p=0;
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        
        for(int i=0;i<V;i++){
            if(vis[i]==0)
            {
                if(dfs(i,vis,adj,-1))
                return true;
                p++;
            }
        }
        return false;
    }
  
    int isTree(int n, int m, vector<vector<int>> &adj) {
        vector<int>ad[n];
        for(auto &it:adj){
            ad[it[0]].push_back(it[1]);
            ad[it[1]].push_back(it[0]);
        }
        return (!isCycle(n,ad) && p==1);
    }
};
