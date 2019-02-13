#include <bits/stdc++.h>
using namespace std;

bool isdis(int arr[])
{
    bool distinct = true;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = i + 1; j < 4; ++j)
        {
            if (arr[i] == arr[j])
                distinct = false;
        }
    }
    return distinct;
}

int main()
{
    int n;
    cin >> n;
    int temp;
    int arr[4];
    bool found = false;
    while (!found)
    {
        temp = ++n;
        for (int i = 0; i < 4; ++i)
        {
            arr[i] = temp % 10;
            temp /= 10;
        }

        found = isdis(arr);
    }
    cout << n << endl;
}