#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> s >> n;
    pair < int , int > a[1005];
    for (int i = 0; i < n; ++i)
        cin >> a[i].first >> a[i].second; 
    bool live = true;
    sort (a, a+n);
    for (int i = 0; i < n; ++i)
    {
        if (a[i].first < s)
            s += a[i].second;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

}