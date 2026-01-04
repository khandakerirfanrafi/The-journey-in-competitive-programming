#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int a[r][c];
    vector<long long> rowsum(r);
    vector<bool> rowzero(r, false);

    for (int i = 0; i < r; i++)
    {
        long long sum = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
            if (a[i][j] == 0)
            {
                rowzero[i] = true;
            }
        }
        rowsum[i] = sum;
    }

    long long fixedrow = -1;

    for (int i = 0; i < r; i++)
    {
        if (rowzero[i] == false)
        {
            if (fixedrow == -1)
            {
                fixedrow = rowsum[i];
            }
            else if (rowsum[i] != fixedrow)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
