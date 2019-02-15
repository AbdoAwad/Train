#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, h;
    cin >> n >> w >> h;
    int a;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= w || a <= h || a <= sqrt(h*h + w*w))
            cout << "DA" << endl;
        else 
            cout << "NE" << endl;
        
    }
}