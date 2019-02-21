#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr [100100];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        while (arr[i] % 2 == 0) arr[i] /= 2;
        while (arr[i] % 3 == 0) arr[i] /= 3;
    }
    sort (arr, arr+n);
    cout << (arr[0] == arr[n-1] ? "YES" : "NO") << endl;
}