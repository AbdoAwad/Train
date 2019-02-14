#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[12] = {4, 7, 47, 74, 444, 447, 474, 744, 777, 774, 747, 477};

    for (int i = 0; i < 12; ++ i)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
}