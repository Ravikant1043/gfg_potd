class Solution{
  public:
    /*You are required to complete this method*/
    unordered_set<int>s;
    void help(Node* root,int n){
        if(!root)return;
        if(!root->left && !root->right){
            s.insert(n);
            return;
        }
        help(root->left,n+1);
        help(root->right,n+1);
    }
    bool check(Node *root)
    {
        if(!root)return 1;
        help(root,0);
        return s.size()==1;
    }
};
