vector<vector<int>>ans;
        set<vector<int>>s;
        sort(arr.begin(),arr.end());
        ans.push_back(arr);
        s.insert(arr);
        while(next_permutation(arr.begin(),arr.end())){
            if(s.find(arr)==s.end()){
                ans.push_back(arr);
                s.insert(arr);
            }
        }
        return ans;
