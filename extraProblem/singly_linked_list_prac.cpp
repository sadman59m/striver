#include<bits/stdc++.h>
using namespace std;

// creating the Node
struct Node {
    int val;
    Node *next;
};

Node *createNewNode(int val) {
    Node *newNode = new Node;
    newNode->val = val;
    newNode->next = nullptr;
    return newNode;
}

void addNewNode(Node *&head, int val) {
    if(head == nullptr) {
        head = createNewNode(val);
        return;
    }

    Node *currNode = head;
    while(currNode->next != nullptr) {
        currNode = currNode->next;
    }

    currNode->next = createNewNode(val);
}

// show the list
void traverseList (Node *&head) {
    Node *currNode = head;
    while(currNode != nullptr) {
        cout << currNode->val << " ";
        currNode = currNode->next;
    }
}


int main() {
    int num;
    Node *head = nullptr;
    while(cin >> num && num != -999) {
        addNewNode(head, num);
    }

    traverseList(head);
    return 0;
}