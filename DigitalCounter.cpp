#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    int n;
    cin >> n;
    int ans = arr[n % 10] * arr[n / 10];
    cout << ans << endl;
}