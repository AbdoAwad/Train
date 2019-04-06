#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a ;
	double b;
	for(int i=0;i<n;i++){
		cin>>a;
		b=360.0/(180-a);
		if(360/(180-a) == b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
	

}