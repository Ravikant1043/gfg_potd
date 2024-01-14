unordered_map<string,int>m;
        string t="";
        vector<int>ans;
        for(int i=0;i<M;i++){
            t="";
            for(int j=0;j<N;j++){
                t+=to_string(matrix[i][j]);
            }
            if(m.find(t)!=m.end())ans.push_back(i);
            else m[t]=i;
        }
        return ans;
