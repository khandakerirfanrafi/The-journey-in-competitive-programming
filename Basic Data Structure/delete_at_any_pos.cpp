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

void delete_at_any_pos(Node* head,int indx)
{
    Node* temp=head;
    for(int i=1;i<indx;i++){
        temp=temp->next;
    }
    Node* deletenode=temp->next;
    temp->next=deletenode->next;
    if(deletenode->next!=NULL){
        temp->next->prev=temp;
    }

    delete deletenode;
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

    delete_at_any_pos(head,1);
    
    
    //insert_at_any_pos(head,tail,2,580);
    print_forward(head);
    //print_backward(tail);
    


    return 0;
}