#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            if (i * i + j == n && i + j * j == m)
            {
                ++cnt;
                // cout << i << " " << j << endl;
            }  
        }
    }
    cout << cnt << endl;
}