#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr [101];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int brib = 0;
    sort ( arr + 1, arr+n);
    while (arr[0] <= arr[n-1])
    {
        -- arr[n-1];
        ++ arr[0];
        ++ brib;
        sort ( arr + 1, arr+n);
    }
    cout << brib << endl;
    
}