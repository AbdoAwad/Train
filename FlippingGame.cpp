#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[101];
    int max = 0;
    int cnt1;
    for (int i = 0; i < n ; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < n; ++ i)
    {
        for (int j = i ; j < n; ++ j)
        {
            cnt1 = 0;
            for (int k = 0; k < n; ++k)
            {
                if (k < i || k > j)
                    cnt1 +=arr [k];
                else 
                    cnt1 += 1 - arr[k];
            }
            if (cnt1 > max)
            max = cnt1;
        }    
    }
    cout << max << endl;
}