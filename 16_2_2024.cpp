class Solution
{
public:
    Node *t;
    void help(Node* root){
        if(!root)return;
        help(root->left);
        Node* n= new Node(root->data);
        t->right=n;
        t=t->right;
        help(root->right);
    }
    Node *flattenBST(Node *root)
    {
        Node* ans=new Node(0);
        t=ans;
        help(root);
        return ans->right;
    }
};
