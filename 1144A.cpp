#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    string s;
    
    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;
        int a[27] = {0};
        bool zero = true;
        string temp ="";
        int one ;

        cin >> s;
        if (s.size() > 26)
        {
            cout << "No" << endl;
            continue;
        }
        for (int k = 0; k < s.size(); k++)  a[s[k] - 'a']++;


        a[0] == 1 ? one =1 : one = 0;
        for (int  j = 1; j < 26; ++j)
        {
            if (a[0] > 1 || a[j] > 1)
                zero = false;
            
            if (a[j] == 1)
                ++ one; 
        }
        string t = "";
        if (zero == false)
            {
                cout << "No" << endl;
            }
        else 
        {
            for (int i = 0; i < 26; ++i)
                (a[i] == 0 ? temp +='0' : temp += '1');
            for (int i = 0; i < one; ++i)
                t += '1';
            // cout << temp << endl;
            // cout << t << endl;

            if (temp.find(t) != -1)
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        }


    }

}