#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int c;

    for (int i = 0; i < n.size(); ++i)
    {
        if (n[i] == '8' || n[i] == '0')
        {
            cout << "YES" << endl;
            cout << n[i] << endl;
            return 0;
        }
    }

    if (n.size() >= 2)
    {
        for (int i = 0; i < n.size(); ++i)
        {
            for (int j = i + 1; j < n.size(); ++j)
            {
                c = ((n[i] - '0') * 10) + (n[j] - '0');
                if (c % 8 == 0)
                    {
                        cout << "YES" << endl;
                        cout << c << endl;
                        return 0;
                    }
                else if (n.size() > 2)
                {
                    for (int k = j+1; k < n.size(); ++k)
                    {
                        c = ((n[i] - '0') * 100) + ((n[j] - '0')*10) + (n[k]-'0');
                        if (c % 8 == 0)
                            {
                                cout << "YES" << endl;
                                cout << c << endl;
                                return 0;
                            }
                    }
                }
            }  
        }
    }
    cout << "NO" << endl;
}