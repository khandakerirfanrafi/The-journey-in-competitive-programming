#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int a = arr[i] + 1;
        auto it = find(arr.begin(), arr.end(), a);
        if (it != arr.end())
        {
            x++;
        }
        else
        {
            continue;
        }}
        cout << x << endl;
        return 0;
    }