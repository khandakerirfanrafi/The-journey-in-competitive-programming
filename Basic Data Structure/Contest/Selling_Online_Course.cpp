#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int x;
    cin >> x;
    if (x == 0) {
        cout << 0 << endl;
        return 0;
    }
    long double com=x*0.2;
    if(com>100){
        cout<<1<<endl;
        return 0;
    }
    long long int final=ceil(100/com);
    cout << final << endl;

    return 0;
}