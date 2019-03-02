#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    bool ans = true;
    if (n < 2 || n % 2 == 0)
        ans = false;
    else
    {
        for (long long  i = 3; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                ans = false;
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    long long a, b;
    long long test [2];
    for (int i = 0; i < t; ++i)
    {
        cin >> a >> b;
        test[0] = abs(a-b);
        test[1] = a + b;
        if (test[0] != 1)
            cout << "NO" << endl;
        else 
        {
            bool ans = isPrime(test[1]);
            cout << (ans ? "YES" : "NO") << endl;
        }
    }
}