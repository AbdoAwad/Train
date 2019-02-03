#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string s ;
    int n ;
    cin >> n ;
    cin >> s ;
    int sumA = 0 , sumD = 0 ;
    for ( int i =0 ; i< n ; ++ i) 
    {
        if (s[i] == 'A') 
            ++ sumA ;
        else 
            ++ sumD ;
    }

    if (sumA > sumD)
        cout << "Anton" << endl ;
    else if (sumD > sumA)
        cout << "Danik" << endl ;
    else 
       cout << "Friendship" << endl ; 
}
