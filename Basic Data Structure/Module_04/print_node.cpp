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

int main()
{

    Node* head=new Node(10);
    Node* a=new Node(10);
    Node* b=new Node(1064);
    Node* c=new Node(10);

    Node* temp=head;

    head->next=a;
    a->next=b;
    b->next=c;

    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }

    return 0;
}