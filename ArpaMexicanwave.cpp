#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n, k, t;
    cin >> n >> k >> t;
    cout << min (min(t, k), n + k - t) << endl;
}