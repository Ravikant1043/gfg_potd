char help(int n,char st,int r){
    string s;
    s+=st;
    for(int i=0;i<r;i++){
        string ans="";
        for(int j=0;j<s.size();j++){
            if(s[j]=='1'){
                ans+="10";
            }
            else ans+="01";
        }
        s=ans;
    }
    // cout<<s<<"\n";
    return s[n-1];
}
class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        int p=0;
        n++;
        for(int i=0;i<s.size();i++){
            int t=(int)pow(2,r);
            if(n<=t){
                return help(n,s[i],r);    
            }
            n-=t;
        }
        return '0';
        
    }
};
