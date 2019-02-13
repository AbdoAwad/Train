#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    double c;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            c = sqrt(i * i + j * j);
            int temp = c;
            if (temp == c && c <= n) {
                ++cnt;
                // cout << i << " " << j << " " << c << " " << temp << endl;
            }
        }
    }
    cout << cnt << endl;
}