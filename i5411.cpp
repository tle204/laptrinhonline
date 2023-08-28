#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x,y;
	cin>>x>>y;
	for (int i=1;i<=y;i++){
		cout<<i<<" ";
		if(i%x==0)
		cout<<endl;
	}
}
