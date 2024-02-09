class Solution{
    public:
    bool take=true;
    int sum(Node* root){
        if(!root)return 0;
        int t=0;
        if(!root->left && !root->right)return 0;
        if(root->left)t+=root->left->data;
        if(root->right)t+=root->right->data;
        if(t!=root->data)take=false;
        sum(root->left);
        sum(root->right);
        return root->data;
    }
    int isSumProperty(Node *root)
    {
        sum(root);
        return take;
    }
    
};
