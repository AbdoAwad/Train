#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int num0 = 0;
    int num5 = 0;
    for (int i = 0 ; i < n; ++i)
    {
        cin >> a;
        a == 0 ? ++num0 : ++num5 ; 
    }
    if (num0 == 0 && num5 < 9 )
        cout << -1 << endl;
    else if (num0 > 0 && num5 < 9)
        cout << 0 << endl;
    else if (num0 > 0)
    {
        int five = (num5/9) * 9;
        for (int i = 0; i < five; ++i)
        {
            cout << 5;
        }
        for (int i = 0; i < num0; ++i)
        {
            cout << 0;
        }
        cout << endl;
    }
    else 
        cout << -1 << endl;
    
    
}