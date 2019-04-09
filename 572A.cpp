#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sa, sb, k, m;
    cin >> sa >> sb >> k >> m;
    int a[100100], b[100100];
    for (int i = 0; i < sa; ++i) cin >> a[i];
    for (int i = 0; i < sb; ++i) cin >> b[i];

    cout << (b[sb-m] <= a[k-1] ? "NO" : "YES" ) << endl;
    
}