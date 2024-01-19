 vector<vector<int>> kTop(vector<int>& arr, int n, int k) {
        unordered_map<int,int>map;
        vector<vector<int>>ans;
        
        
        set<pair<int,int>>s;
        // s.insert({1,2});
        // s.insert({2,1});
        // s.insert({1,3});
        // s.insert({2,4});
        // cout<<s.size()<<" ";
        // for(auto &it:s)cout<<it.second<<" ";
        for(auto &it:arr){
            if(map[it]>0){
                s.erase({-map[it],it});
            }
            map[it]++;
            s.insert({-map[it],it});
            vector<int>t;
            int p=k;
            for(auto &it:s){
                if(p==0)break;
                t.push_back(it.second);
                p--;
            }
            ans.push_back(t);
        }
        
        // s.insert({2,1});
        // cout<<s.find(2)==s.end();
        // cout<<s.size();
        
        
        
        return ans;
    }
