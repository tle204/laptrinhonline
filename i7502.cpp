#include<bits/stdc++.h>
using namespace std;
int main()

{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b+c<24&&a+b+c>=00) cout<<a+b+c;
	if(a+b+c>=24) cout<<a+b+c-24;
	if(a+b+c<0) cout<<24+a+b+c;
}
