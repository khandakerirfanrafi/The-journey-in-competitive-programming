#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        int s = 0;
        for(int j = l; j <= r; j++){
            s += a[j];
        }
        cout << s << endl;
    }

    return 0;
}
