#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }
    // cout << ((n-1) / r) << endl;
    // cout << r << " " << n << endl;
    cout << arr[(n - 1) / r] << endl;
}