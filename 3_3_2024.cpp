static bool cmp(string a,string b){
        string s=a+b;
        string ss=b+a;
        return s>ss;
    }
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),cmp);
	    string s="";
	    for(int i=0;i<arr.size();i++)s+=(arr[i]);
	    return s;
	}
