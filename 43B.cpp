#include <bits/stdc++.h>
using namespace std;
int a[128];
int b[128];

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int k = 0; k < s1.size(); k++)  a[s1[k]]++;
    for (int k = 0; k < s2.size(); k++)  
    {
        if (s2[k] == ' ')
            continue;
        b[s2[k]]++;
    }
    for (int i = 0; i < 128; ++i)
    {
        if (a[i] < b[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

}