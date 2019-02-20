#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        sum += pow ((a/10), a%10);
    }
    cout  << sum << endl;
}