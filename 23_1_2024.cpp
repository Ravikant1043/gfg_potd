class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int>adj[n+1];
        for(auto &i:prerequisites){
            adj[i[1]].push_back(i[0]);
        }
        int V=n;
	    int ind[V]={0};
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        for(auto &j:adj[i])ind[j]++;
	    }
	    
	    for(int i=0;i<V;i++){
	        if(ind[i]==0)q.push(i);
	    }
	    vector<int>ans;
	    while(!q.empty()){
	        int t=q.front();
	        q.pop();
	        ans.push_back(t);
	        for(auto &j:adj[t]){
	            ind[j]--;
	            if(ind[j]==0)q.push(j);
	        }
	    }
	    if(ans.size()==n)return ans;
	    return {};
    }
};
