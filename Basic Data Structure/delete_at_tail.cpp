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

void delete_at_tail(Node*& head, Node*& tail)
{
    if (tail == NULL) return; // empty list

    Node* deletenode = tail;

    if (head == tail) { // only one node
        head = NULL;
        tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
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

    delete_at_tail(head,tail);
    delete_at_tail(head,tail);
    delete_at_tail(head,tail);
    
    //insert_at_any_pos(head,tail,2,580);
    print_forward(head);
    //print_backward(tail);
    


    return 0;
}