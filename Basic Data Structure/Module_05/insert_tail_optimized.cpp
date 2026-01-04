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

void insertAtTail(Node* &head,Node*&tail,int val)//inserting a new node at head
{
    Node* newnode=new Node(val);//creating a new node
    if(head==NULL){
        head=newnode;//linking head to new node
        tail=newnode;//linking tail to new node
        return;
    }
    
    tail->next=newnode;//linking the last node to the new node
    tail=newnode;//linking tail to the new node
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
    Node *tail=new Node(30);//30 will be the third node

    head->next=a;//linking head node to second node
    a->next=tail;//linking second node to third node

    insertAtTail(head,tail,5);//5 will be inserted at head
    insertAtTail(head,tail,6);//590 will be inserted at head
    insertAtTail(head,tail,57);
    insertAtTail(head,tail,58);
    printll(head);//printing the linked list

    cout<<"tail= "<<tail->val<<endl;


    return 0;
}