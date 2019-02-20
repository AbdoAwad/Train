#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s;
    s += s1[0];
    for (int i = 0; i < s1.size(); ++i)
    {
        if (s1[i] == '-')
            s += s1[i + 1];
    }
    cout << s << endl;
}