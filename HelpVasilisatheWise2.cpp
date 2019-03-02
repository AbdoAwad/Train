#include <bits/stdc++.h>
using namespace std;
int ans[4];
int main()
{
    int arr[6]; // {r1, r2, c1, c2, d1, d2}

    for (int i = 0; i < 6; ++i)
        cin >> arr[i];

    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j < 10; ++j)
        {
            for (int k = 1; k < 10; ++k)
            {
                for (int z = 1; z < 10; ++z)
                {
                    if (k + z == arr[1] && i + j == arr[0] && i + k == arr[2] && j + z == arr[3] && i + z == arr[4] && j + k == arr[5])
                    {
                        ans[3] = z;
                        ans[2] = k;
                        ans[1] = j;
                        ans[0] = i;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 4; ++ j)
        {
            if (ans[i] == ans[j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << ans[0] << " " << ans[1] << endl;
    cout << ans[2] << " " << ans[3] << endl;
}