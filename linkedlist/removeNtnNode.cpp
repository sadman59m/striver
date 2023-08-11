#include<bits/stdc++.h>
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

int countNodes(Node *head) {
    int cnt = 0;
    Node *current = head;
    while(current != nullptr) {
        ++cnt;
        current = current->next;
    }
    return cnt;
}

Node *updatedList(Node *head, int nodeNumber, int totalNodes) {
    int currentNodeNumber = 1;
    Node *currentNode = head;
    while(currentNode != nullptr && currentNodeNumber <= totalNodes) {
        if(currentNodeNumber + nodeNumber >= totalNodes) {
            currentNode->next = currentNode->next->next;
            return head;
        }
        currentNode = currentNode->next;
        currentNodeNumber++;
    }
    return head;
}

int main()
{
    Node *head = nullptr;
    int value;
    while (cin >> value && value != -99999)
    {
        insert(head, value);
    }
    int totalNodes = countNodes(head);

    int nodeNumber;
    cin >> nodeNumber;

    Node *deletedList = updatedList(head, nodeNumber, totalNodes);

    traverse(deletedList);

    return 0;
}