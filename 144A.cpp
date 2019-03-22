#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr [105];
    int max = 0;
    int maxL = 0;
    int min = 100;
    int minL = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxL = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minL = i;
        }
    }
    int ans = maxL + (n-1-minL);
    cout <<(maxL > minL ? ans - 1 : ans ) << endl;
}