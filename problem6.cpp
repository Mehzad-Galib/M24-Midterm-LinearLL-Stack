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

void changeLL(Node *&head)
{
    while (head != NULL)
    {
        if (head->value % 2 == 0)
        {
            head->value = -1;
        }
        cout << head->value;
        if (head->Next != NULL)
            cout << " -> ";
        head = head->Next;
    }
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

    changeLL(head);
    display(head);
}