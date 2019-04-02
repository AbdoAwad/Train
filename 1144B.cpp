    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int a[2005];
        int odd = 0, even = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[i] % 2 == 0 ? ++even : ++odd;
        }
        if (even == odd || even + 1 == odd || odd + 1 == even)
        {
            cout << 0 << endl;
            return 0;
        }
        int loop = 0;
        int temp = 0;
        int sum = 0;
        int i = 0;
        odd > even ? loop = odd - even : temp = even - odd;
        sort(a, a + n);
        if (temp > loop)
        {
            while (temp-1 != 0)
            {
                if (a[i] % 2 == 0 )
                {
                    sum += a[i];
                    -- temp;
                }  
                ++ i;
                
            }
        }
        else 
            while (loop-1 != 0)
            {
                
                
                if (a[i] % 2 == 1 )
                {
                    sum += a[i];
                    -- loop;
                }  
                ++ i;
            }

        cout << sum << endl;
    }