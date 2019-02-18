#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            cin >> arr[i][j];
    }
    int count;
    bool found = false;
    for ( int i = 0; i < 3 ; ++i)
    {
        for (int j = 0; j < 3; ++ j)
        {
            count =0;
            if  (arr[i][j] == '#') 
                ++ count;
            if (arr[i][j+1]== '#')
                ++ count;
            if (arr[i+1][j]== '#')
                ++ count;
            if (arr[i+1][j+1]== '#')
                ++ count;
            if (count != 2 )
            {
                found = true;
                break;
            }
        }
    }
    cout << (found ? "YES" : "NO" ) << endl;

}