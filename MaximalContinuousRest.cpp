#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int arr[2000009];
    bool tmp = true;
    int max = 0;
    int cnt = 0;

    for (int i = 0; i < n; ++ i)
    {
        cin >> arr[i];
        if (tmp == true && arr[i] == 1)
            ++cnt;
        else 
            tmp = false;
    }
    for ( int i = n -1; i > 0; -- i)
    {
        if (arr[i] == 1)
            ++ cnt;
        else 
            break;
    }

    max = cnt;
    cnt = 0;
    
    
 
    for (int i = 0; i < n ; ++ i)
    {
        if (cnt > 0 && arr[i] == 0)
        {
            if (cnt > max)
                max = cnt;
            cnt = 0;
        }
        else if (arr[i] == 1)
        {
            ++ cnt;
        }
    }
    if (cnt > max)
    {
        max = cnt;
    }
    cout << max << endl;

}