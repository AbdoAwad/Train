#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    int cnt = 0;
    for (int i = 0; i < 4; ++ i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; ++ i)
    {
        for (int j = i + 1; j < 4; ++ j)
        {
            if (arr[i] == arr[j] )
            {
                ++cnt;
                break;
            }
        }
    }
    cout << cnt << endl;
}