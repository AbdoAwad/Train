#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int week [7];
    for (int i = 0; i < 7; ++ i)
        cin >> week[i];
    int f =0;
    while (n > 0)
    {
        for (int j = 0; j < 7; ++j)
        {
            n -= week[j];
            if (n <= 0)
            {
                cout << j+1 << endl;
                return 0;
            }
        }
    }


}