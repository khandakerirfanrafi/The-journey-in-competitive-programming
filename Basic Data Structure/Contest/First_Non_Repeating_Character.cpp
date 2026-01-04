#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<int> frequant(26, 0);
    for (char ch : s)
    {
        frequant[ch - 'a']++;
    }
    for (char ch : s)
    {
        if (frequant[ch - 'a'] == 1)
        {
            cout << ch << endl;
            return 0;
        }
        else{
            continue;
        }
    }
    cout << -1 << endl;

    return 0;
}