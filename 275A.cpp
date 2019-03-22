#include <bits/stdc++.h>
using namespace std;



int arr[3][3];
int temp[3][3];
int main()
{ 
    for (int i = 0; i < 3; ++ i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >>  arr[i][j];
            

        }
    }
    temp[0][0] =    arr[0][1] +   arr[1][0] +  arr[0][0];
	temp[0][1] =    arr[0][0] +   arr[0][2] +  arr[1][1] + arr[0][1];
	temp[0][2] =    arr[0][1] +   arr[1][2] +  arr[0][2];
	temp[1][0] =    arr[0][0] +   arr[2][0] +  arr[1][1] + arr[1][0];
	temp[1][1] =    arr[0][1] +   arr[2][1] +  arr[1][2] + arr[1][0] + arr[1][1];
	temp[1][2] =    arr[0][2] +   arr[2][2] +  arr[1][1] + arr[1][2];
	temp[2][0] =    arr[1][0] +   arr[2][1] +  arr[2][0] ;
	temp[2][1] =    arr[1][1] +   arr[2][0] +  arr[2][2] + arr[2][1];
	temp[2][2] =    arr[2][1] +   arr[1][2] +  arr[2][2] ;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << (temp[i][j] + 1)% 2 ;
        cout << endl;
    }
}