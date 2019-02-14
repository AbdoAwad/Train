#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int t = 240 - k;
    int crn = 0, cnt = 0;
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    for (int i = 0; i < n; ++i)
    {
        if (crn + arr[i] <= t)
        {
            ++ cnt;
            crn += arr[i];
        }
        else 
            break;
    }
    cout << cnt << endl;
}