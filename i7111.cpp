#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main () {
	double n=1,a,TB=0;
	while(n<=2) {
		scanf("%lf",&a);
		if(a<0||a>10)
			printf("Nhap sai\n");
		else {
			TB+=a;
			n++;
		}
	}
	printf("TB = %0.2lf",TB/2);
}
