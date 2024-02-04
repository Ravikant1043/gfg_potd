class Solution {
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        string a="",b="";
        bool take=false;
        while(head1){
            if(!take && head1->data!=0)take=true;
            if(take)a+=(head1->data +'0');
            head1=head1->next;
        }
        take=false;
         while(head2){
            if(!take && head2->data!=0)take=true;
            if(take)b+=(head2->data +'0');
            head2=head2->next;
        }
        if(a.size()<b.size() || (a.size()==b.size() && a<b))swap(a,b);
        int i=a.size()-1;
        int j=b.size()-1;
        int car=0;
        Node *ans=NULL;
        string an="";
        int p;
        while(i>=0 && j>=0){
            if(car==0 && a[i]==b[j]){
                p=0;
            }
            else if((a[i]+car)>=b[j]){
                p=(a[i]-'0')-(b[j]-'0')+car;
                car=0;
            }
            else {
                p=((a[i]-'0')+10 + car) -(b[j]-'0');
                car=-1;
            }
            i--;j--;
            an+=(p+'0');
        }
        while(i>=0){
            if(car==0){
                an+=a[i];
                i--;
                continue;
            }
            if(a[i]=='0'){
                an+='9';
                car=-1;
            }
            else{
                an+=(a[i]+car);
                car=0;
            }
            i--;
        }
        i=0;
        reverse(an.begin(),an.end());
        while(an[i]=='0')i++;
        an=an.substr(i);
        if(an.size()==0){
            cout<<"0";
            return ans;
        }
        cout<<an<<" ";
        return ans;
    }
};
