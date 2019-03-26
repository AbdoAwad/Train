#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, zeroA = 0, oneA = 0, zeroB = 0, oneB = 0;
    for (int i = 0; i < n; ++ i)
    {
        cin >> a >> b;
        a == 1 ?  ++oneA : ++zeroA;
        b == 1 ?  ++oneB : ++zeroB;
    } 
    int ans = 0;
    oneA >= zeroA ? ans += zeroA : ans += oneA;
    oneB >= zeroB ? ans += zeroB : ans += oneB;

    cout << ans << endl;

}