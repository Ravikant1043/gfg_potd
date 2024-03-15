class Solution
{
    public:
    void sort(Node **head)
    {
         set<int>a;
         Node*t=*head;
         while(t){
             a.insert(t->data);
             t=t->next;
         }
         t=*head; ";
        for(auto it:a){
            (t->data)=it;
            t=t->next;
        }
    }
};
