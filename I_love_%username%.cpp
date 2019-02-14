#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1010];
    int cnt = 0;
    
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    for (int  i = 1; i < n; ++ i)
    {
        int testl = 0;
        int testm = 0;
        for (int j = i-1 ; j >= 0; --j)
            {
                if (arr[i] < arr[j])
                    ++ testl;
                else if (arr[i] > arr[j])
                    ++ testm;

                if (testl == i || testm == i)
                    ++ cnt;   
            }
    }
    cout << cnt << endl;
    
}