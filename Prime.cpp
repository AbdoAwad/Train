#include <bits/stdc++.h>
using namespace std;

// check if th number is orime or not
bool isPrime (long long n)
{
    if (n < 2 || n % 2 == 0) return false;
    else 
    {
        for (int i = 3; i * i < n;  i += 2)
        {
            if (n % i == 0) return false;
        }
    }
    return true;
}

// count prime number :
vector<bool> count_Prime_number (int n)
{
    vector <bool> isprime ( n + 1 , true );
    isprime[0] == isprime[1] == 0;

    for (int i = 2; i*i <= n; ++i )
    {
        if (isprime[i])
        {
            for (int j = i * 2; j <= n; j += 2)
            {
                isprime[j] = 0;
            }
        }
    }
    return isprime ;    
}

int main()
{

    vector<bool> primenumer = count_Prime_number(10);
    for (int i = 0; i < 10; ++ i)
    {
        if (primenumer[i])
            cout << i << " ";
    }
    cout << endl;
    
}