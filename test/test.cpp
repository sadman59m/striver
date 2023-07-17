#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *createNode(int val)
{
    Node *newNode = new Node;
    newNode->val = val;
    newNode->next = nullptr;
    return newNode;
}

void insert(Node *&head, int val)
{
    if (head == nullptr)
    {
        head = createNode(val);
    }
    else
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = createNode(val);
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

int main()
{
    Node *head = nullptr;
    int val;
    while (cin >> val && val != -99999)
    {
        insert(head, val);
    }
    traverse(head);

    return 0;
}