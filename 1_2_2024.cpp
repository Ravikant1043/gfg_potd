class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        vector<int>v(26,0);
        for(auto it:s){
            if(it>='A'&& it<='Z')v[it-'A']++;
            else if(it>='a'&&it<='z')v[it-'a']++;
        }
        for(auto it:v)if(it==0)return false;
        return true;
    }

};
