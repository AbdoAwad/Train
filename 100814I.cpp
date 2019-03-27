#include <bits/stdc++.h>
using namespace std;
int hamming (int x, int y)
{
    int dis = 0;
    while (x || y) {
        dis += (x % 2) ^ (y % 2);
        x /= 2, y /= 2;
    }
    return dis;
    
}
int main()
{
    int t;
    cin >> t;
    int n ;
    int arr[103];
    for (int i = 0 ; i < t; ++i)
    {
        cin >> n;
        for (int j = 0; j < n; ++j)
            cin >> arr[j];
        int mx = 0;
        for (int j = 0; j < n-1; ++j)
        {
            for (int k = j + 1; k < n; ++k )
            {
                mx = max(mx, hamming(arr[j], arr[k]));
            }
        }
        cout << mx << endl;
    }
}