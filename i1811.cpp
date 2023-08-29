#include<bits/stdc++.h>
using namespace std;
int main() {
	float a[13][13],s=0;
	char c;
	int i,j,b;
	scanf("%d\n%c",&b,&c);
	for(i=0; i<12; i++)
		for(j=0; j<12; j++) {
			scanf("%f",&a[i][j]);
		}
		for(j=0; j<12; j++) {
			s+=a[b][j];
		}
	if(c=='S') printf("%.1f",s);
	else printf("%.1f",s/12);
}
