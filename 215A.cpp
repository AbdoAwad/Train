#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int arrA[51];
    int arrB[51];
    cin >> n;
    int mx = 0;
    int cnt = 0;
    int tmp;
    for (int i = 0; i < n; ++i)
        cin >> arrA[i];
    cin >> m;
    for (int i = 0; i < m; ++i)
        cin >> arrB[i];
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arrB[j] % arrA[i] !=0 )
                continue;
            else 
            {    
                tmp = arrB[j] / arrA[i];
                if (tmp > mx)
                {
                    mx = tmp;
                    cnt = 1;
                }
                else if (tmp == mx)
                    ++cnt;
            }

        }
    }
    cout << cnt << endl;
}