#include <bits/stdc++.h>
using namespace std;
map <char, int> mp;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        mp[s[i]] += 1; 
    }
    int odd = 0;
    for (int i = 0; i < mp.size(); ++i)
    {
       if( mp[i] % 2 == 1 ) ++odd; 
    }
    cout << (odd == 0 || odd % 2 == 1 ? "First" : "Second") << endl;
}