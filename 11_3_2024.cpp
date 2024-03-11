class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++)m[mat1[i][j]]++;
	    }
	    int ans=0;
	     for(int i=0;i<n;i++){
	         if(x<mat2[i][0])break;
	        for(int j=0;j<n;j++){
	            if(x<mat2[i][j])break;
	            if(m.find(x-mat2[i][j])!=m.end())ans++;
	        }
	    }
	    return ans;
	}
};
