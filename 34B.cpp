#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[101];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int ans = 0;
    sort (arr, arr + n);
    for (int i = 0; i < m; ++i)
    {
        if (ans + arr[i] > ans)
            break;
        else 
            ans += arr[i];
    }
    cout << -1 * ans << endl;
}