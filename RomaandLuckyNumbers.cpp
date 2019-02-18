#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string a;
    int count = 0;
    int ans = 0;

    for ( int i = 0; i < n; ++ i)
    {
        count = 0;
        cin >> a;
        for (int j = 0; j < a.size(); ++j )
        {
            if (a[j] == '4' || a[j] == '7')
                ++ count;
        }
        if (count <= k)
            ++ ans;
    }
    cout << ans << endl;
}