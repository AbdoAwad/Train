#include <bits/stdc++.h>
using namespace std;
int a [4];
int t;
int indexX;
int indexY;
string s;

int main()
{
    cin >> t;
    for (int i = 0; i < 4; ++i) cin >> a[i];
    cin >> s;
    int d1, d2;
    d1 = a[2] - a[0];
    d2 = a[3] - a[1];

    if (d1 > 0)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'E')
            {
                indexX = i;
                --d1; 
            }
            if (d1 == 0)
            {
                break;
            }
        }
    }
    else if ( d1 < 0)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'W')
            {
                indexX = i;
                ++d1; 
            }
            if (d1 == 0)
            {
                break;
            }
        }
    }
    if (d2 > 0)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'N')
            {
                indexY = i;
                --d2; 
            }
            if (d2 == 0)
            {
                break;
            }
        }
    }
    else if (d2 < 0)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'S')
            {
                indexY = i;
                ++d2; 
            }
            if (d2 == 0)
            {
                break;
            }
        }
    }

    if ( d1 != 0 || d2 != 0)
        cout << -1 << endl;
    else 
        cout << max(indexX+1, indexY+1) << endl;

    
    
}