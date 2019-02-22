#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[101];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != "00")
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr[i] == arr[j])
                    arr[j] = "00";
            }
        }
    }
    for (int i = 0; i < n; ++ i)
        cout << (arr[i] != "00" ? "NO" : "YES") << endl;
}