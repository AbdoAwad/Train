#include <bits/stdc++.h>
using namespace std;

int num;

int main()
{
    int n;
    cin >> n;
    num = n % 10;
    cout << (num < 10 - num ? n - num : n + (10 - num)) << endl;

}