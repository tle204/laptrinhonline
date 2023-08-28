#include<stdio.h>
#include<string.h>

int main() {
	double n;
	scanf("%lf",&n);
	if(0<n&&n<=2000)
		printf("Isento");
	if(n>2000&&n<=3000) {
		n=n-2000;
		printf("R$ %0.2lf",n*8/100);

	}
	if(n>3000&&n<=4500) {
		n=n-3000;
		printf("R$ %0.2lf",n*18/100+1000*8/100);
	}
	if(n>4500) {
		n=n-4500;
		printf("R$ %0.2lf",n*28/100+1000*8/100+1500*18/100);
	}
}
