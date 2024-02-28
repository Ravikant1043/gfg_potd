class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int i=0;
        if(s[0]=='-')i++;
        if((s.size()-i)<3){
            int t=stoi(s);
            return t%8==0?1:-1;
        }
        int n=s.size();
        int t=((s[n-3]-'0')*100 +(s[n-2]-'0')*10 +(s[n-1]-'0'));
        return t%8==0?1:-1;
    }
};
