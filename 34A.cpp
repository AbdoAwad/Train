#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sol[105];
    for (int i = 0; i < n; ++i)
        cin >> sol[i];

    int mn = abs(sol[n - 1] - sol[0]);
    int pos0 = n, pos1 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(sol[i + 1] - sol[i]) < mn)
        {
            pos0 = i + 1;
            pos1 = i + 2;
            mn = abs(sol[i + 1] - sol[i]);
        }
    }
    cout << pos0 << " " << pos1 << endl ;
}