class Solution{
public:
	string removeDuplicates(string str) {
	   unordered_map<char,int>a;
	   string ans="";
	   for(auto &it:str){
	       if(a.find(it)==a.end())ans+=it;
	       a[it]++;
	   }
	   return ans;
	}
};
