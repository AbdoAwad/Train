#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double drink ;
    double sum = 0;
    for (int i = 0; i < n; ++ i)
    {
        cin >> drink;
        sum += drink;
    }
    printf("%.6f\n",(sum/(n*100))*100);
}