#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ini, trg ;
    cin >> ini >> trg;
    int sum = 0;
    for (int i = 0; i < ini.size(); ++i)
    {
        int first = abs((trg[i]-'0') - (ini[i]-'0'));
        int secon;
        trg[i]- '0' > (ini[i]-'0') ? secon =abs((trg[i]- '0') - (ini[i]-'0' +10)): secon =((trg[i]- '0') + 10) - (ini[i]-'0');
        sum += min ( first, secon);
    }

    cout << sum << endl;



}