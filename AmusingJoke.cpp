#include <bits/stdc++.h>
using namespace std;

int main()
{
    string g ;
    string h ;
    string mix ;
    cin >> g ;
    cin >> h ;
    cin >> mix ;
    string gh ;
    gh = g + h ;
    bool flag = true ;
    
    for ( int i = 0 ; i < gh.size() ; ++i) 
    {
        for (int j = 0 ; j < mix.size() ; ++j)
        {
            if (gh[i] == mix[j])
            {
                mix [j] = '0' ;
                break ;
            }
        }
    }

    for (int i = 0 ; i < mix.size() ; ++i)
    {
        if ( mix [i] != '0')
        {
            flag = false ;
            break ;
        }

    }
    if ((gh.size() == mix.size()) && (flag == true))
        cout << "YES" << endl ;
    else 
        cout << "NO" << endl ;
}
