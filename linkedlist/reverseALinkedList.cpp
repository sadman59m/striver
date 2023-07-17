// creation, traversal and counting elements of a singly linkedlist

#include <bits/stdc++.h>
using namespace std;

// create a struct which is user defined data typej
struct node
{
    int val;
    struct node *next;
};

void create(struct node *myList)
{
    cin >> myList->val;
    if (myList->val == -99999)
    {
        myList->next = NULL;
        // return;
    }
    else
    {
        myList->next = (struct node *)malloc(sizeof(struct node));
        create(myList->next);
    }
}

// traverse the linked list
void traverse(struct node *myList)
{
    // if (myList->next == NULL)
    // {
    //     cout << "End\n";
    //     return;
    // }
    // cout << myList->val << "\n";
    // traverse(myList->next);
    while (myList != NULL)
    {
        cout << myList->val << endl;
        myList = myList->next;
    }
}

int countElement(struct node *myList)
{
    int cnt = 0;
    if (myList->next == NULL)
    {
        return 0;
    }
    else
    {
        cnt = 1 + countElement(myList->next);
        return cnt;
    }
}

struct node *reverseList(struct node *head)
{
    struct node *newHead = NULL;
    while (head != NULL)
    {
        struct node *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
    return newHead;
}

int main()
{
    // declare a struct type pointer variable
    struct node *head = (struct node *)malloc(sizeof(struct node));

    create(head);

    traverse(head);

    cout << "Total Element " << countElement(head);

    head = reverseList(head);

    traverse(head);

    return 0;
}