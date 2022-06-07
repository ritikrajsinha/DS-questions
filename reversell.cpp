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
node *reversell(node *&head, node *&tail, int k)
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

    node *m = reversell(head, tail, k);

    print(m);

    return 0;
}