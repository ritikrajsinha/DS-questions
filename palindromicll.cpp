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
node *mid(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    int co = 0;
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
bool ispalindrome(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    node *middle = mid(head);
    node *temp = middle->next;
    middle->next = reversell(temp);
    node*head1=head;
    node*head2=middle->next;
    while (head2!=NULL)
    {
        if (head1->data!=head2->data)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
    
    
    
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    cin >> n;
    int da;
    for (int i = 0; i < n; i++)
    {
        cin >> da;
        insertionattail(head, tail, da);
    }

    if(ispalindrome(head)){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    

    return 0;
}