#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , a , b , c ;
    cin >> n >> a >> b >> c ;
    int counter = 0 ;
    int r;
    for(int i = 0; i <= n; ++i)
    {
		for(int j = 0; j <= n; ++j)
        {
			r = n - i * a - j * b;
			if(r >= 0 && r % c == 0)
            {
				if(i + j + r / c > counter)
					counter = i + j + r / c;
			}
        }
    }
    cout << counter << endl;
}