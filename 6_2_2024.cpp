
/*struct Node
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    void height(Node* root,int &k,int &ans,vector<Node*> &t,unordered_set<Node*> &s)
    {
       if(!root)return;
       if(!root->left && !root->right){
           if(k==0){
               ans++;
               return;
           }
           if(t.size()<k)return;
           Node* p=t[t.size()-k];
           if(s.find(p)!=s.end())return;
            s.insert(p);
            ans++;
       }
       t.push_back(root);
       height(root->left,k,ans,t,s);
       height(root->right,k,ans,t,s);
       t.pop_back();
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	vector<Node*> t;
    	unordered_set<Node*>s;
    	int ans=0;
    	height(root,k,ans,t,s);
    	return ans;
    }
};
