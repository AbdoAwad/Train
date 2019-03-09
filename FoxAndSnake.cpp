#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1;
    string right;
    string left = "#" ;
    for (int i = 0; i < m; ++i)
        s1 += '#';
    for (int i = 0; i < m-1; ++i)
        right += '.';
    right += '#';
    for (int i = 0; i < m-1; ++i)
        left += '.';
    
    bool rightbool = true;
    bool complet = true; 
    for (int i = 0; i < n; ++ i)
    {
        if (complet)
        {
            cout << s1 << endl;
            complet =false;
        }
        else 
        {
            if (rightbool)
            {
                cout << right << endl;
                complet =true;
                rightbool = false;
            }
            else
            {
                cout << left << endl;
                complet =true;
                rightbool = true;
            }
            
        }
    }  
}