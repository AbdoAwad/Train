#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bx, by, ax, ay, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if ((cx > ax && cx >= bx))
    {
        cout << "NO" << endl;
        return 0;
    }
    if ((cy > ay && cy >= by))
    {
        cout << "NO" << endl;
        return 0;
    }
    

    cout << "YES" << endl;
}