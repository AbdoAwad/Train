#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "00";
    string t;
    cin >> t;
    s += t;
    // cout << s << endl;
    for (int i = 2; i < s.size(); ++i)
    {
        if (s[i] == '1')
            continue;
        else if (s[i] == '4'&&s[i-1] == '1' )
            continue;
        else if ((s[i] == '4' && s[i-1] == '4' && s[i-2] == '1' ))
            continue;
        else 
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}