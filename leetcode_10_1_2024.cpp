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
private:
    unordered_map<TreeNode*,TreeNode*>m;
    TreeNode* tp=NULL;
    void help(TreeNode* root,int value){
        if(!root) return ;
        if(root->val==value)tp=root;
        if(root->left){
            m[root->left]=root;
            help(root->left,value);
        }
        if(root->right){
            m[root->right]=root;
            help(root->right,value);
        }
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        if(!root)return 0;
        m[root]=NULL;
        queue<pair<TreeNode*,TreeNode*>>q;
        help(root,start);
        q.push({tp,NULL});
        int ans=0;
        while(q.size()){
            ans++;
            int n=q.size();
            for(int i=0;i<n;i++){
                auto it=q.front();
                q.pop();
                if(!it.first)continue;
                if(it.first->left && it.first->left!=it.second)q.push({it.first->left,it.first}); 
                if(it.first->right && it.first->right!=it.second)q.push({it.first->right,it.first});
                if(m[it.first] && m[it.first]!=it.second)q.push({m[it.first],it.first});
            }
        }
        return ans-1;
    }
};
