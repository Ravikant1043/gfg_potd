class Solution {
public: 
    int t=0;
    void help(int node,int par,vector<int> adj[],int tin[],
                int low[],vector<vector<int>>&ans,vector<int>&vis){
        vis[node]=1;
        low[node]=tin[node]=t;
        t++;
        for(auto &it:adj[node]){
            if(it==par)continue;
            if(vis[it]==0){
                help(it,node,adj,tin,low,ans,vis);
                low[node]=min(low[it],low[node]);
                if(low[it]>tin[node]){
                    if(it>node)
                    ans.push_back({node,it});
                    else ans.push_back({it,node});
                }
            }
            else{
                low[node]=min(low[it],low[node]);
            }
        }
    }
	vector<vector<int>> criticalConnections(int v, vector<int> adj[]){
	    v++;
	    vector<int>vis(v,0);
	    int tin[v];   // the first time the node is accessed 
	    int low[v];   // the minimum value of the connected component of single cycle in the graph
	    vector<vector<int>>ans;
	    help(0,-1,adj,tin,low,ans,vis);
	    sort(ans.begin(),ans.end());
	    return ans;
	}
};
