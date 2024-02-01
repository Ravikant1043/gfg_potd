int atoi(string s) {
        //Your code here
        int t=0;
        bool p=false;
        if(s[0]=='-')p=true;
        if(p)
        {
            for(int i=1;i<s.size();i++){
                if(s[i]>='0' && s[i]<='9'){
                    t=t*10+(s[i]-'0');
                }
                else return -1;
            }
        }
        else {
            for(int i=0;i<s.size();i++){
                if(s[i]>='0' && s[i]<='9'){
                    t=t*10+(s[i]-'0');
                }
                else return -1;
            }
        }
        return p==true?-1*t:t;
    }
