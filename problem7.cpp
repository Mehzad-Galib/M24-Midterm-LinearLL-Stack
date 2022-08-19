#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

struct Node *reverseK(struct Node **current, int k)
{
    struct Node *prev = NULL;
    int count = 0;
    while (*current && count++ < k)
    {
        struct Node *next = (*current)->Next;
        (*current)->Next = prev;
        prev = *current;
        *current = next;
    }
    return prev;
}

struct Node *reverseKNodes(struct Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct Node *current = head;
    struct Node *prev = reverseK(&current, k);
    head->Next = reverseKNodes(current, k);
    return prev;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }

    int k;
    cin >> k;

    head = reverseKNodes(head, k);

    display(head);
}