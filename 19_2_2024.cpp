int minValue(string s, int k){
        vector<int>a(26,0);
        if(k==s.size())return 0;
        for(auto &it:s)a[it-'a']++;
        sort(a.begin(),a.end(),greater<int>());
        priority_queue<int>p;
        for(auto &it:a)p.push(it);
        while(k--){
            auto it=p.top();
            p.pop();
            if(it-1>0)
            p.push(it-1);
        }
        int ans=0;
        while(p.size()){
            auto it=p.top();
            p.pop();
           ans+=(it*it);
        }
        return ans;
    }
