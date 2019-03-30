#include <bits/stdc++.h>
using namespace std;
int arr[55];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> arr[i];
    sort (arr, arr + m);
    int mn = 1000001000; 

    for (int i = 0; i <= m - n; ++i )
    {
        if ((arr[i+n-1] - arr [i]) < mn)
            mn = arr[i+n-1] - arr [i];
    }
    cout << mn << endl;
}
