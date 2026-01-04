#include <bits/stdc++.h>
using namespace std;
class Node//defining a node
{
public://members of the node
    int val;//value part
    Node *next; //pointer part

    Node(int val)   //constructor
    {
        this->val = val;//initializing value part
        next = NULL;//initializing pointer part
    }
};

void insertAtanyPos(Node* &head,int in,int val)//inserting a new node at head
{
    Node* newnode=new Node(val);//creating a new node
    Node* temp=head;//temporary pointer to traverse the linked list
    for(int i=1;i<in;i++){
        temp=temp->next;//moving to the next node
    } 
    newnode->next=temp->next;//linking new node to the next node of temp
    temp->next=newnode;//linking temp to the new node
}
void printll(Node* head){//printing the linked list
    Node* temp=head;//temporary pointer to traverse the linked list
    while(temp!=NULL){//traversing until the end of the linked list
        cout<<temp->val<<endl;//printing the value of the current node
        temp=temp->next;//moving to the next node
    }
}
int main()
{
    //Node *head=NULL; //empty linked list
    Node *head=new Node(10);//10 will be the head node
    Node *a=new Node(20);//20 will be the second node
    Node *b=new Node(30);//30 will be the third node

    head->next=a;//linking head node to second node
    a->next=b;//linking second node to third node

    insertAtanyPos(head,1,5);//5 will be inserted at head
    insertAtanyPos(head,2,590);//590 will be inserted at head
    //insertAtanyPos(head,3,6590);
    //insertAtanyPos(head,4,5790);
    printll(head);//printing the linked list
    


    return 0;
}