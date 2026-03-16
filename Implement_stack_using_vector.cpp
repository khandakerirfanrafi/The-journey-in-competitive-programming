#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> v;
public:
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        if (!v.empty())
            v.pop_back();
    }
    int top()
    { 
        if (!v.empty())
            return v.back();
        return -1; // Return -1 if stack is empty
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    cout<<s.top()<<endl; // Output: 3

    return 0;
}