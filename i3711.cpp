#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s;
	cin>>n;
	s=n;
	for(int i=0; i<10; i++) {
		s=2*s;
		printf("N[%d] = %d\n",i,s/2);
	}
}
