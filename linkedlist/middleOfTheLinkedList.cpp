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

int main()
{
    // declare a struct type pointer variable
    struct node *head = (struct node *)malloc(sizeof(struct node));

    create(head);

    traverse(head);

    int cnt = 0;

    struct node *current = head;
    while (current != NULL)
    {
        ++cnt;
        // cout << current->val << " " << cnt << endl;
        current = current->next;
    }

    int middlePoint = cnt / 2 + 1;
    cnt = 1;
    current = head;
    while (cnt < middlePoint && current != NULL)
    {
        ++cnt;
        current = current->next;
    }

    cout << current->val;

    return 0;
}