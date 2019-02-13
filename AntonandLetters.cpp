#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    int arr [1001] ;
    getline(cin,s);
    int alpha = 0 ;

    for (int i = 0 ; i < s.size () ; ++ i ) 
    {
        if(s[i]>='a' && s[i]<='z')
        {
            ++ alpha ;
            for (int j = i  + 1 ; j <= s.size () ; ++ j)
                {
                    if (s[j] == s[i])
                        s[j] = '0' ;
                }
        }
    }
    cout << alpha << endl ;
}
