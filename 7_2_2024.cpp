class Solution{
    public:
    // int ans=0;
    Node* LCA(Node *root, int n1, int n2)
    {
   //Your code here
   
        if(!root)return NULL;
        if(root->data==n1|| root->data==n2){;return root;}
        Node*a=LCA(root->left,n1,n2);
        Node*b=LCA(root->right,n1,n2);
        if(a==NULL)return b;
        else if(b==NULL)return a;
        return root;
    }
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        Node *t=LCA(root,a,b);
        // if(t->data==a||t->data==b)return 1;
        queue<pair<Node*,int>>q;
        q.push({t->left,1});
        int ans=0;
        while(!q.empty()){
            Node* p=q.front().first;
            int c=q.front().second;
            q.pop();
            if(p){
            if(p->data==a||p->data==b)ans+=c;
            if(p->left)q.push({p->left,c+1});
            if(p->right)q.push({p->right,c+1});}
        }
        // q.erase();
        while(q.size())q.pop();
        q.push({t->right,1});
        while(!q.empty()){
            Node* p=q.front().first;
            int c=q.front().second;
            q.pop();
            
            if(p){
            if(p->data==a||p->data==b)ans+=c;
            if(p->left)q.push({p->left,c+1});
            if(p->right)q.push({p->right,c+1});}
        }
        return ans;
    }
};
