void insert(struct TrieNode *root, string key)
        {
            for(int i=0;i<key.size();i++){
                int p=key[i]-'a';
                if(root->children[p]==NULL){
                    root->children[p]= new TrieNode();
                }
                root=root->children[p];
            }
            root->isLeaf=true;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            for(int i=0;i<key.size();i++){
                int p=key[i]-'a';
                if(root->children[p]==NULL){
                    return false;
                }
                root=root->children[p];
            }
            return root->isLeaf;
        }
