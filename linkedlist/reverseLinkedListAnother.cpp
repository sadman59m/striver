#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->val = value;
    newNode->next = nullptr;
    return newNode;
}

void insert(Node *&head, int value)
{
    if (head == nullptr)
    {
        head = createNode(value);
    }
    else
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = createNode(value);
    }
}

void traverse(Node *myList)
{
    while (myList != nullptr)
    {
        cout << myList->val << "\n";
        myList = myList->next;
    }
}

Node *reverseList(Node *head)
{
    Node *newHead = nullptr;

    while (head != nullptr)
    {
        Node *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
    return newHead;
}

int main()
{
    Node *head = nullptr;
    int value;
    while (cin >> value && value != -99999)
    {
        insert(head, value);
    }

    traverse(head);

    head = reverseList(head);

    traverse(head);

    return 0;
}