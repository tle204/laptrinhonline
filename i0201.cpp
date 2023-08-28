#include<bits/stdc++.h>
using namespace std;
int main() {
	int y=0,m=0,d=0,n;
	scanf("%d",&n);
	while (n>0) {

		if(n>=365) {
			y++;
			n-=365;
		}
		if(n<365 && n>=30) {
			m++;
			n-=30;
		}
		if(n<30) {
			d=n;
			n=n-n;
		}
	}
	printf("%d",y);
	printf(" nam\n%d",m);
	printf(" thang\n%d",d);
	printf(" ngay");
}
