#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[100100];
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    long long tim = 0;
    long long position = 1;
    for (int i = 0; i < m; ++i)
    {
        if (position <= arr[i])
        {
            tim += arr[i] - position;
            position = arr[i];
        }
        else
        {
            tim += n - position + 1;
            position = 1;
            tim += arr[i] - position;
            position = arr[i];
        }
    }
    cout << tim << endl;
}