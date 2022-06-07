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
void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int length(node *head)
{
    int co = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        co++;
    }
    return co;
}
node *kappend(node *&head, node *&tail, int k,int l)
{
    node*newtail=head;
    node*newhead=head;
    for (int i = 1; i < (l-k); i++)
    {
        if(newtail->next!=NULL)
       newtail=newtail->next;
    }
    for (int i = 1; i < ((l-k)+1); i++)
    {
        if(newhead->next!=NULL){

        newhead=newhead->next;
        }
    }
    newtail->next=NULL;
    tail->next=head;
    head=newhead;
    tail=newtail;
    return newhead;
    
    
    
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    int k;
    cin >> n;
    int da;
    for (int i = 0; i < n; i++)
    {
        cin >> da;
        insertionattail(head, tail, da);
    }
    cin>>k;
    k=k%n;

    int l=length(head);
    if (k==0)
    {
        print(head);
    }
    else
    {
    node *m = kappend(head, tail, k,l);
    print(m);
        
    }
    
    



    return 0;
}