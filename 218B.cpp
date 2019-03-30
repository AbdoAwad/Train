#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[1010], b[1010];
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int mx = 0;
    int mn = 0;
    for (int i = 0; i < n; ++i)
    {
        sort (a, a + m);
        mx += a[m-1];
        --a[m-1];
    }
    int ind = 0;
    for (int i = 0; i < n; ++i)
    {
        sort (b, b + m);
        mn += b[ind];
        --b[ind];
        if (b[ind] == 0) ++ind;
    }
    cout << mx << " " << mn << " " << endl;;
}