#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int cntf ;
    for (int i = 0; i < n; ++i)
    {
        cntf = 0;
        cin >> s;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j] == 'F')
                ++cntf;
        }
        if (cntf==3 || cntf==4 || cntf==0 || cntf==6 || cntf==7 || cntf==10)
            {cout << "Yes" << endl;}
             
        else
            cout << "No" << endl;
        
    }
}