class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_map<int,int>m;
        Node* t=head1;
        while(t){
            m[t->data]++;
            t=t->next;
        }
        t=head2;
        int ans=0;
        while(t){
            int p=t->data;
            if(m.count(x-p))ans+=m[x-p];
            t=t->next;
        }
        return ans;
    }
};
