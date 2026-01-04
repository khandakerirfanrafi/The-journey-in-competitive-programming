#include <bits/stdc++.h>
using namespace std;
void fun(int* &p){
    p=NULL; // changing the local copy of pointer p to NULL

}
int main()
{

    int x=10;
    int *p=&x; // pointer to integer x
    fun(p); // passing the address pointed by p (which is x) to the function
    cout<<p<<endl; // prints the address of x
    cout<<*p<<endl; // prints the value of x

    return 0;
}