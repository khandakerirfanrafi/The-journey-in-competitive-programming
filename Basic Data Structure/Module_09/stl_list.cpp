#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l(10,3);
    
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }

    //option 2 range based for loop
    for(int val:l){
        cout<<val<<endl;
    }

    return 0;
}