#include <bits/stdc++.h>
using namespace std;

int arr[200100] ;
int main()
{
    int n;
    
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; ++i)
    {
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    vector<int> inc;
    vector<int> dec;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == arr[i + 1])
        {
            inc.push_back(arr[i]);
            dec.push_back(arr[i]);
            ++i;
        }
        else 
            inc.push_back(arr[i]);
    }
    if (inc.size() + dec.size() == n)
    {
        cout << "YES" <<endl;
        cout << inc.size() << endl;
        for (int i = 0; i < inc.size(); ++i)
            cout << inc[i] << " ";
        cout << endl;
        cout << dec.size() << endl;
        for (int i = dec.size()-1; i >= 0; --i)
            cout << dec[i] << " ";
        cout << endl;
    }
    else 
    {
        cout << "YES" <<endl;
        cout << inc.size() << endl;
        for (int i = 0; i < inc.size(); ++i)
            cout << inc[i] << " ";
        cout << endl;
        cout << 0 << endl;
        cout << endl;
    }

}