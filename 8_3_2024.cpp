class Solution{
public:	
	bool sameFreq(string s)
	{
	    unordered_map<int,int>m,m2;
	    for(auto it:s)m[it-'a']++;
	    for(auto &it:m)m2[it.second]++;
	    if(m2.size()==1)return 1;
	    if(m2.size()>2)return false;
	    int a=-1,b;
	    for(auto &it:m2){
	       if(a==-1)a=it.first;
	       else b=it.first;
	    }
	    if((m2[a]==1 && a==1)||(m2[b]==1 && b==1))return true;
	    if((m2[a]==1 && (a-b)==1)||(m2[b]==1&&(b-a)==1))return true;
	    return false;
	}
};  
