int sumOfLeafNodes(Node *root ){
             /*Your code here */
             if(!root)return 0;
             if(!root->left && !root->right)return root->data;
             return sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right);
        }
