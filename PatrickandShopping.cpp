#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long arr[] = {2 * b + 2 * a, a + c + b, 2 * b + 2 * c, 2 * a + 2 * c};
    sort(arr, arr + 4);
    cout << arr[0] << endl;
}