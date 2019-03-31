#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[200100];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n);
    int mn = arr[0];
    int mx = arr[n-1];
    long long numMn = 0;
    long long numMx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == mn) ++numMn;
        else if (arr[i]== mx) ++numMx;
    }
    cout << mx-mn << " ";
    cout << (mx == mn ? numMn * (numMn - 1) / 2 : numMn * numMx ) << endl;

}