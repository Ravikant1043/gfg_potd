class Solution
{
    public:
    unordered_map<Node*,Node*>m;
    vector<Node*>t;
    void help(Node* root){
        if(!root)return;
        if(root->key!=0)t.push_back(root);
        if(root->left){
            m[root->left]=root;
            help(root->left);
        }
        if(root->right){
            m[root->right]=root;
            help(root->right);
        }
    }
    int ans=0;
    int hello(Node* root){
        if(!root)return 0;
        int l=hello(root->left);
        int r=hello(root->right);
        ans+=abs(l)+abs(r);
        return l+r+root->key-1;
    }
    int distributeCandy(Node* root)
    {
        // help(root);
        // m[root]=NULL;
        // int ans=0;
        // unordered_map<Node*,int>vis;
        // queue<pair<Node*,int>>q;
        // for(auto &it:t){q.push({it,0});vis[it]++;}
        // while(!q.empty()){
        //     int n=q.size();
        //     for(int i=0;i<n;i++){
        //         auto it=q.front();
        //         auto no=it.first;
        //         q.pop();
        //         if(no->left && vis[no->left]==0){
        //             vis[no->left]++;
        //             ans+=it.second+1;
        //             q.push({no->left,it.second+1});
        //         }
        //         if(no->right && vis[no->right]==0){
        //             vis[no->right]++;
        //             ans+=it.second+1;
        //             q.push({no->left,it.second+1});
        //         }
        //         if(m[no]!=nullptr && vis[m[no]]==0){
        //             vis[m[no]]++;
        //             ans+=it.second+1;
        //             q.push({m[no],it.second+1});
        //         }
        //     }
        // }
        // return ans;
        hello(root);
        return ans;
    }
//      8
//   1   1
//   0 0 0 
//  0 0 0 0
    
};
