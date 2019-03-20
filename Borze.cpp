#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ans;
    cin >> s ;
    for (int i = 0; i < s.size(); ++ i)
    {
        if (s[i] == '.')
        {
            ans += '0';
            s[i] = '0';
        }
        else if (s[i] == '-' && s[i+1] == '.')
        {
            ans += '1';
            s[i] = '0';
            s[i+1] = '0';
        }
        else if (s[i] == '-' && s[i+1] == '-')
        {
            ans += '2';
            s[i] = '0';
            s[i+1] = '0';

        }
    }
    for (int j = 0; j < ans.size(); ++j)
        cout << ans[j];
    cout << endl;
}