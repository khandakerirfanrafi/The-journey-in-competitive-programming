#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long M;
    cin >> s >> M;

    long long strlen = 0;
    char lastchar=0;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            strlen++;
            lastchar = s[i];
        } else {
            int d = s[i] - '0';
            strlen += (d - 1);
        }

        if (strlen >= M) {
            cout << lastchar << endl;
            break;
        }
    }
    return 0;
}
