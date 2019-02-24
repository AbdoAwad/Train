#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    string s2 = "";
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        cnt = 0;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[i] == s[j])
                ++cnt;
        }
        if (cnt % k != 0)
        {
            cout << "-1" << endl;
            return 0;
        }

        else
        {
            if (s2.find(s[i]) == -1)
                for (int x = 0; x < cnt / k; ++x)
                {
                    s2 += s[i];
                }
        }
    }
    for (int i = 0; i < s.size() / s2.size(); ++i)
        cout << s2;

    cout << endl;
}