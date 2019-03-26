#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int llk = l * k;
    int dp = d * c;
    cout << (min(llk/nl, min(dp, p/np))/n) << endl;
}