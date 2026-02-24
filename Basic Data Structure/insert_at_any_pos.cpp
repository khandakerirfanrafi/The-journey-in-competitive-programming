#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_any_pos(Node* &head,Node* &tail,int idx, int val){
    Node* newnode=new Node(val);
    Node* temp=head;
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
}



void print_forward(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void print_backward(Node*tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main()
{

    Node* head=new Node(100);
    Node* a=new Node(200);
    Node* b=new Node(300);
    Node* tail=new Node(400);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;

    insert_at_any_pos(head,tail,1,50);
    //insert_at_any_pos(head,tail,2,580);
    print_forward(head);
    print_backward(tail);
    


    return 0;
}