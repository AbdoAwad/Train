#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[101];
    int cnte = 0, cnto = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            ++cnte;
        else
            ++cnto;
    }

    if (cnto < cnte)
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % 2 != 0)
                cout << i + 1 << endl;
        }
    }
    else 
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % 2 == 0)
                cout << i + 1 << endl;
        }
    }
}