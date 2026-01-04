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
void printReverse(Node* tem){//printing the linked list in reverse order
    if(tem==NULL){//base case: if head is NULL, return
        return;
    }
    printReverse(tem->next);//recursive call with the next node
    cout<<tem->val<<endl;//printing the value of the current node after returning from recursion
}

int main()
{
    Node* head=NULL;//initially head is NULL
    Node* tail=NULL;//initially tail is NULL
    int val;
    while(1){
        cin>>val;//taking input
        if(val==-1){//if input is -1 then break the loop
            break;
        }
        insertAtTail(head,tail,val);//inserting the new node at tail
    }
    //printll(head);//printing the linked list
    printReverse(head);//printing the linked list in reverse order
    cout<<"tail= "<<tail->val<<endl;


    return 0;
}