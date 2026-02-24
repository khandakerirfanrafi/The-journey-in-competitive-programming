#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void insert_at_tail(Node*& head,Node*&tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void reverce_link_list(Node*& head,Node* temp,Node*& tail){
    if(temp->next==NULL){
        head=temp;
        return;
    }
    reverce_link_list(head,temp->next,tail);
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;
}

void print_forward(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}

int main()
{

    Node*head=NULL;
    Node*tail=NULL;
    int val;
    
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverce_link_list(head,head,tail);
    print_forward(head);
    return 0;
}