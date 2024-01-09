vector <int> search(string pat, string txt)
        {
            //code here
            int n=txt.size();
            int pp=pat.size();
            // string pt;
            if(txt.find(pat)>=n)return {-1};
            vector<int>ans;
            // int t=1;
            // while(1){
            //     int p=txt.find(pat);
            //     if(p>=txt.size())break;
            //     int k=p+t;
            //     ans.push_back(k);
            //     t=k+pp;
            //     txt=txt.substr(p+pp);
            //     // cout<<txt<<" ";
            // }
            // return ans;
            for(int i=0;i<n-pp+1;i++){
                if(txt[i]==pat[0]){
                    if(txt.substr(i,pp)==pat)ans.push_back(i+1);
                    // cout<<txt.substr(i,pp);
                }
                
            }
            return ans;
