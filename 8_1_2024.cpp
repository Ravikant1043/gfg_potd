class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node *ans;
        Node *p=NULL;
        ans->next=NULL;
	    while(node1!=NULL && node2!=NULL){
	        int f=node1->data;
	        int s=node2->data;
	        if(f<=s){
	            Node *n=newNode(f);
	            n->next=ans;
	            if(!p)p=n;
	            ans=n;
	            node1=node1->next;
	        }
	        else{
	            Node *n=newNode(s);
	            n->next=ans;
	            if(!p)p=n;
	            ans=n;
	            node2=node2->next;
	        }
	    }
	    while(node1!=NULL){
	        int f=node1->data;
	        Node *n=newNode(f);
	        if(!p)p=n;
            n->next=ans;
            ans=n;
            node1=node1->next;
	    }
	    while(node2!=NULL){
	        int f=node2->data;
	        Node *n=newNode(f);
	        if(!p)p=n;
            n->next=ans;
            ans=n;
            node2=node2->next;
	    }
	    p->next=NULL;
	    return ans;
    }  
};
