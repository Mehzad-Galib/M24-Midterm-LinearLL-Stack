#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;
    Node<S> *Middle;
    int count;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
        Middle = NULL;
        count = 0;
    }
    // push operation
    void push(S val)
    {
        Node<S> *temp = new Node<S>(val);
        if (head == NULL)
        {
            head = top = temp;
            Middle = temp;
            count++;
            return;
        }
        // O(1) operation
        head->next = temp;
        temp->prev = head;

        head = head->next;
        if (count % 2 == 1)
        {
            Middle = Middle->next;
        }
        count++;
    }
    // pop operation
    S pop()
    {
        Node<S> *delNode;
        delNode = top;
        S chk;
        // if there is no element(underflow)
        if (head == NULL)
        {
            cout << "stack underflow" << endl;
            return chk;
        }
        if (top == head) // only one element
        {
            head = top = NULL;
        }
        else // more than one element
        {
            top = delNode->prev;
            top->next = NULL;

            if (count % 2 == 0)
            {
                Middle = Middle->prev;
            }
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
    // empty, size, top
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "List is empty and stack underflow" << endl;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }

    int size()
    {
        return count;
    }

    int mid()
    {
        if (count == 0)
        {
            return -1;
        }
        return Middle->value;
    }
};
