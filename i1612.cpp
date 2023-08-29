#include <bits/stdc++.h>
using namespace std;
int main() {
	double s,a,n;
	cin>>n;
	s=0; a=1/6;
	for(int i=1;i<=n;i++)
	s=1/(6+s);
	printf("%0.10lf",3+s);
}
