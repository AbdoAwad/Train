#include <bits/stdc++.h>
using namespace std;


int main()
{
    int primes[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 14; ++i)
    {
        if (n == primes[i] && m == primes[i+1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

}