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

Node *mergeTwoLists(Node *list1, Node *list2)
{
    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;

    if (list2->val > list1->val)
        swap(list1, list2);

    Node *res = list1;

    while (list1 != nullptr && list2 != nullptr)
    {
        Node *tmp = nullptr;
        while (list1 != nullptr && list1->val <= list2->val)
        {
            tmp = list1;
            list1 = list1->next;
        }
        tmp->next = list2;
        swap(list1, list2);
    }

    return res;
}

int main()
{
    Node *head1 = nullptr;
    Node *head2 = nullptr;
    int value;
    while (cin >> value && value != -99999)
    {
        insert(head1, value);
    }

    while (cin >> value && value != -99999)
    {
        insert(head2, value);
    }

    traverse(head1);

    traverse(head2);

    Node *mergedHead = mergeTwoLists(head1, head2);

    traverse(mergedHead);

    return 0;
}