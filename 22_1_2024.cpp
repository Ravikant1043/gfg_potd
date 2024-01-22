class Solution
{
    public:
    vector<vector<int>>ans;
    int s;
    void help(vector<int> a,int sum,Node* root){
        if(!root){
            return;
        }
        a.push_back(root->key);
        sum+=root->key;
        help(a,sum,root->left);
        if(sum==s){
            ans.push_back(a);
        }
        help(a,sum,root->right);
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        s=sum;
        help({},0,root);
        return ans;
    }
};
