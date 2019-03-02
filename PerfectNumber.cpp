#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    long long ans = 19;
    while (k > 1)
    {
        ans += 9;
        int tmp = ans, sum = 0;
        while (tmp)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == 10)
            --k ;
    }
    cout << ans << endl;
}