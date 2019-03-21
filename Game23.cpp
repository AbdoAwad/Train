 #include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, cnt = 0;
	cin >> n >> m;
    
	if (m % n != 0) 
    {
        cout << -1 << endl; 
	    return  0;
	}
	
	m /= n;
	
	while (m % 3 == 0)
	{   
	    m /= 3;
	    ++cnt;
	}
	while (m % 2 == 0) 
	{
    	m /= 2;
    	++cnt;
	}
	cout << (m == 1 ? cnt : -1);
	return 0;
}