class Solution {
  public:
    // string help(string S,int K){
    //     int n=S.size();
    //     priority_queue<pair<char,int>>pq;
    //     for(int i=0;i<n;i++)pq.push({S[i],n-i});
    //     string ans="";
    //     set<pair<char,int>>s;
    //     while(K--){
    //         auto it=pq.top();
    //         s.insert(it);
    //         pq.pop();
    //     }
    //     for(int i=0;i<n;i++){
    //         pair<char,int>p={S[i],n-i};
    //         if(s.find(p)==s.end())
    //             ans+=S[i];
    //     }
    //     // int i=0;
    //     // n=ans.size();
    //     // while(i<n && ans[i]=='0'){
    //     //     // ans=ans.substr(1);
    //     //     i++;
    //     //     if(i==n)return "0";
    //     // }
    //     // if(i==ans.size())ans="0";
    //     // ans=ans.substr(i+1);
    //     if(ans.size()==0)return "0";
    //     return ans;
    // }
  
    string removeKdigits(string S, int k) {
        // string ans=help(S,K);
        // // return ans;
        // string t=S;
        // int k=K;
        // int i=0;
        // while(t[i]!='0' && k){
        //     // t=t.substr(1);
        //     i++;
        //     k--;
        // }
        // // t=t.substr(i+1);
        // // i=0;
        // while(t[i]=='0')i++;
        // // if()
        // t=t.substr(i);
        // if(t.size()==0)return "0";
        // if(k)ans=min(ans,help(t,k));
        // return ans;
        
        if(k==S.size())return "0";
        stack<char>s;
        for(auto &it:S){
            while(!s.empty() && s.top()>it){
                if(k){
                    k--;
                    s.pop();
                }
                else break;
            }
            if(!s.empty() && it=='0')s.push(it);
            else if(it!='0')s.push(it);
        }
        string ans="";
        while(k-- && !s.empty())s.pop();
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans==""?"0":ans;
    }
};
