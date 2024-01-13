class Solution
{
    public:
    Node* insertionSort(struct Node* h)
    {
        if(!h || !h->next)return h;
        vector<int>a;
        Node* p=h;
        while(h){
            a.push_back(h->data);
            h=h->next;
        }
        sort(a.begin(),a.end());
        int i=0;
        h=p;
        while(h){
            h->data=a[i++];
            h=h->next;
        }
        return p;
    }
    
};
