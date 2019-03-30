#include <bits/stdc++.h>
using namespace std;

int divsor[1001000];
void div(int a, int b, int c)
{
    
    for (int i = 1; i <= (a * b * c); ++i)
    {
        for (int j = i; j <= (a * b * c); j += i)
        {
            ++divsor[j];
        }

    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    div(a, b, c);
    long long sum = 0;
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                sum += divsor[i * j * k] % 1073741824;
            }
        }
    }
    cout << sum << endl;
}