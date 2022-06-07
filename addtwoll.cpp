#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertionattail(node *&head, node *&tail, int d)
{
    node *n = new node(d);
    if (head == NULL && tail == NULL)
    {
        head = tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}
node* addtwolinkedlist(node*head1,node*head2){
    node*anshead=NULL;
    node*anstail=NULL;
    int carry=0;
    while (head1!=NULL||head2!=NULL||carry!=0)
    {
        int val1=0;
        if (head1!=NULL)
        {
            val1=head1->data;
        }
        int val2=0;
        if (head2!=NULL)
        {
            val2=head2->data;
        
        }
        
        int sum=carry+val1+val2;
        int digit=sum%10;
        insertionattail(anshead,anstail,digit);
        carry=sum/10;
        if(head1!=NULL){
            head1=head1->next;
        }
        if (head2!=NULL)
        {
            head2=head2->next;
        }
        
    }
    return anshead;
    


}
void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *reversell(node *&head)
{
    // tail=head;

    node *prev = NULL;
    node *curr = head;
    node *n;
    while (curr != NULL)
    {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }

    return prev;
}
int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    node*head2=NULL;
    node*tail2=NULL;
    int n,m;
    cin >> n;
    cin>>m;
    int da;
    int de;
    for (int i = 0; i < n; i++)
    {
        cin >> da;
        insertionattail(head1, tail1, da);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> de;
        insertionattail(head2, tail2, de);
    }

    head1 = reversell(head1);
    head2 =reversell(head2);

    node*ans=addtwolinkedlist(head1,head2);
    ans=reversell(ans);
    print(ans);
    
   

    return 0;
}