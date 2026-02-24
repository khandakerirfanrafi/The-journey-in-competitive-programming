#include <bits/stdc++.h>
using namespace std;
class Node // defining a node
{
public:         // members of the node
    int val;    // value part
    Node *next; // pointer part
    Node *prev;

    Node(int val) // constructor
    {
        this->val = val; // initializing value part
        next = NULL;     // initializing pointer part
        prev = NULL;     // initializing previous pointer part
    }
};

void insertAtTail(Node *&head, Node *&tail, int val) // inserting a new node at head
{
    Node *newnode = new Node(val); // creating a new node
    if (head == NULL){
        head = newnode; // linking head to new node
        tail = newnode; // linking tail to new node
        return;
    }
    tail->next = newnode; // linking the last node to the new node
    newnode->prev = tail; // linking the new node to the last node
    tail = newnode;       // linking tail to the new node
}

void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; // initially head is NULL
    Node *tail = NULL; // initially tail is NULL
    int val;
    while (1)
    {
        cin >> val; // taking input
        if (val == -1)
        { // if input is -1 then break the loop
            break;
        }
        insertAtTail(head, tail, val); // inserting the new node at tail
    }
    printll(head); // printing the linked list

    // cout<<"tail= "<<tail->val<<endl;

    return 0;
}