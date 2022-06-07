#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// This function gets two arguments - the head pointers of the two linked lists
// Return the node which is the intersection point of these linked lists
// It is assured that the two lists intersect
int length(Node *head)
{
    int co = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        co++;
    }
    return co;
}
Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2)
{
    if (l1 == NULL || l2 == NULL)
    {
        return NULL;
    }
    int d = 0;
    Node *ptr1 = l1;
    Node *ptr2 = l2;
    int leng1 = length(l1);
    int leng2 = length(l2);
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = l1;
        ptr2 = l2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = l2;
        ptr2 = l1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return NULL;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

}

/*
 *
 *
 *   You do not need to refer or modify any code below this.
 *   Only modify the above function definition.
 *	Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
 *	You do not even need to read or know about the code below.
 *
 *
 *
 */

Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);

    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;

    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }

    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);

    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;

    return 0;
}