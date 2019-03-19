#include <bits/stdc++.h>
using namespace std;
int arr [205];
int main()
{
    int n;
    cin >> n;
    
    int p, q;
    cin >> p;
    for (int i = 0; i < p; ++i)
        cin >> arr[i];
    cin >> q;
    for (int i = p; i < q + p; ++i)
        cin >> arr[i];
    
    int count = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < p+q; ++j)
        {
            if (i == arr[j])
            {
                ++ count;
                break;
            }
        }
    }
    cout << (count == n ? "I become the guy." : "Oh, my keyboard!") << endl;
}