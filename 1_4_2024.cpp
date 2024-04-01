class Solution {
  public:
    int ans = 0;
    void inorder(Node* node, vector<int>& vec) {
        if(!node) return;
        inorder(node->left, vec);
        vec.push_back(node->data);
        inorder(node->right, vec);
    }
    int merge(vector<int> &arr, int s, int m, int e) {
        vector<int> t1,t2;
        for(int i=s;i<=m;i++) t1.push_back(arr[i]);
        for(int i=m+1;i<=e;i++) t2.push_back(arr[i]);
      
        int N = t1.size(), M = t2.size();
        for(int i = 0, j = 0, k = s; k <= e; k++) {
            if(i == N) { arr[k] = t2[j++]; continue; }
            if(j == M) { arr[k] = t1[i++]; continue; }
            if(t1[i]<=t2[j]) arr[k]=t1[i++];
            else {
                ans += (t1.size()-i);
                arr[k]= t2[j++];
            }
        }
    }
    void mergeSort(vector<int>& arr, int s, int e) {
        if( s >= e) return;
        int m = (s + e)/2;
        mergeSort(arr, s, m);
        mergeSort(arr, m+1, e);
        merge(arr, s, m, e);
    }
    int pairsViolatingBST(int n, Node *root) {
        vector<int> arr;
        inorder(root, arr);
        mergeSort(arr, 0, arr.size()-1);
        return ans;
    }
};
