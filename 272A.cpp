#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hand;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> hand;
        sum += hand;
    }
    int ans = 0;
    for (int i = 1; i < 6 ; ++ i)
    {
        if ((sum + i) % (n + 1) != 1 )
            {
                ++ans; 
            }
    }
    cout << ans << endl;
}