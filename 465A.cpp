#include <bits/stdc++.h>
using namespace std;

int cnt;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool breaked = false;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            breaked = 1;
            break;
        }
        ++ cnt;
    }
    cout << (breaked ? cnt + 1 : cnt) << endl;
    


}