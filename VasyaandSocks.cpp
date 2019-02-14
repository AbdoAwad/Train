#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int add = m;
    int cnt = 0;
    int i = 1;
    while (true)
    {
        --n;
        ++cnt;
        if (i == m)
        {
            ++n;
            // cout << n << " " << m << endl;
            m += add;
        }
        ++i;
        if (n == 0  )
            break;
    }
    cout << cnt << endl;
}