#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l={1,2,3,4,5};
    list<int> l2(l); // copy constructor
    
    l2.clear(); // clear all elements from l2
    cout<<l2.size();
    
    for(int val:l2){
        cout<<val<<endl;
    }

    return 0;
}