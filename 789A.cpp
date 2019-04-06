#include <bits/stdc++.h>
using namespace std;

int days;
int w[100100];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> w[i];

    sort(w, w + n);
    for (int i = n-1; i >= 0; ++i)
    {
        if (w[i] > k*2)
        {
            w[i] -= k*2;
            ++ days;
        }
        else if (w[i] == k *2)
        {
            w[i] = 0;
            ++days;
        }
        else if (w[i] > 0 && i != 0)
        {
            w[i] = 0;
            w[i-1] = w[i-1] - (k*2 - w[i]);
            ++ days;
        }
    }
    cout << days << endl;
}