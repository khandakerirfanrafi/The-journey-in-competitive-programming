#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> pref(N);
    
    long long x;
    cin >> x;
    pref[0] = x;

    for (int i = 1; i < N; i++) {
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    for (int i = 0; i <N; i++) {
        cout << pref[i] << " ";
    }

    return 0;
}
