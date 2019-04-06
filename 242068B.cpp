#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char photo[101][101];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j) cin >> photo[i][j];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j) 
        {
            if (photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y')
            {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }
    cout << "#Black&White" << endl;

}