#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	long long n,a,b,x,y,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		s=0;
		cin>>a>>b;
		if(a>b){
			y=a; x=b;
		}
		if(a<=b){
			y=b;x=a;
		}
		for(int j=x+1;j<y;j++){
			if(j%2!=0) s+=j;
		}
		cout<<s<<endl;
	}
}
