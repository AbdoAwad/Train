#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    long long a[101];
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] + 2 * d <= a[i+1])
        {
            ++cnt;
            if (1 + a[i] + 2 * d <= a[i+1] )
                ++cnt;
        }
    }
    cout << cnt + 2 << endl;
}