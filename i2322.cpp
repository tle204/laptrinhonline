#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	long long tong=0;
	cin>>a;
	for(int i=1;i<=a;i++){
	cin>>n;
	while(n--)
	tong+=pow(2,n);
	cout<<tong<<endl;
	tong=0;
	}
}
