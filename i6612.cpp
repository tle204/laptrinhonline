#include <bits/stdc++.h>
using namespace std;
int main() {
	double s,a,n;
	cin>>n;
	s=0; a=1/2;
	for(int i=1;i<=n;i++)
	s=1/(2+s);
	printf("%0.10lf",1+s);
}
