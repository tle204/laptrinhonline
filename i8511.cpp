#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x>>y;
		int s=0;
		if(x%2==0)
			x++;
		else x=x;
		for(int j=1; j<=y; j++) 
			{
				s+=x;
				x+=2;
			}
			cout<<s<<endl;
	}
}
