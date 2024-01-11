/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=-1;
    void help(TreeNode* root,int m,int mi){
        if(!root)return;
        int p=root->val;
        ans=max({ans,abs(p-m),abs(mi-p)});
        m=max(m,p);
        mi=min(mi,p);
        help(root->left,m,mi);
        help(root->right,m,mi);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)return ans;
        help(root,root->val,root->val);
        return ans;
    }
};
