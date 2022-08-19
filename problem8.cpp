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

void printMdelN(Node *head, int m, int n)
{
    Node *current = head, *t;
    int count;
    while (current)
    {
        for (count = 1; count < m &&
                        current != NULL;
             count++)
            current = current->Next;

        if (current == NULL)
            return;

        t = current->Next;
        for (count = 1; count <= n && t != NULL; count++)
        {
            Node *temp = t;
            t = t->Next;
            free(temp);
        }

        current->Next = t;
        current = t;
    }
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
            cout << "->";
        n = n->Next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int k, m, n;

    cin >> k >> m >> n;

    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }

    printMdelN(head, m, n);
    display(head);
}