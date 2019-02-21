#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long t;
    long long sum;
    long long r = 2;
    long long out;
    for (int i = 0; i < n; ++i)
    {
        out = 0;
        cin >> t;
        sum = (t * (t + 1)) / 2;

        for (int i = 0; (1 << i) <= t; ++i )
        {
            out += (1 << i);
        }

        cout << sum - (out * 2) << endl;
    }
}