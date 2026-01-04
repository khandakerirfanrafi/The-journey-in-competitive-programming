#include <bits/stdc++.h>
using namespace std;

/// @brief 
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

    Node a(34), b(57), c(676);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    return 0;
}