class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         map<int,vector<int>> mp;
         vector<int> result;
         int n= mat.size();
         
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         bool flip=true;
         for(auto& it: mp){
             if(flip){
                 reverse(it.second.begin(),it.second.end());
             }
             for(auto& it2:it.second){
                 result.push_back(it2);
             }
             flip=!flip;
         }
         return result;
         
    }
};
