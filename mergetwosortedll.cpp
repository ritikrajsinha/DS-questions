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
node *mergetwosortedll(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *newhead;
    if (head1->data < head2->data)
    {
        newhead = head1;
        node *c = mergetwosortedll(head1->next, head2);
        newhead->next = c;
    }
    else
    {
        newhead = head2;
        node *d = mergetwosortedll(head1, head2->next);
        newhead->next = d;
    }
    return newhead;
}
node *takeinput(node *head,node*tail)
{
    int n;
    cin>>n;
    int da;
    for (int i = 0; i < n; i++)
    {
        cin>>da;
        insertionattail(head,tail,da);
    }
    return head;
    
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
/*node *reversell(node *&head, node *&tail, int k)
{
    // tail=head;
    int co = 0;
    node *prev = NULL;
    node *curr = head;
    node *n;
    while (curr != NULL && co < k)
    {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
        co++;
    }
    if (n != NULL)
    {
        head->next = reversell(n, tail, k);
    }
    return prev;
}*/
int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    node*head2=NULL;
    node*tail2=NULL;
    int t;
    cin >> t;
    while (t--)
    {
       head1=takeinput(head1,tail1);
       head2=takeinput(head2,tail2);

        node *newhead = mergetwosortedll(head1, head2);
        print(newhead);
    }

    return 0;
}