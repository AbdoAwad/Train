#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[101];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int index = 0;
    bool flag = true;
    int cnt = 0;
    while (flag)
    {
        cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            arr[i] -= m;
            if (arr[i] <= 0)
                ++cnt;
            else 
                index = i+1;
        }
        if (cnt == n || cnt == n-1)
            flag = false;
    }

    cout << (index > 0 ? index : n ) << endl;
}