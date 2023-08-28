#include <bits/stdc++.h>
using namespace std;
int main() {
	double x,a,f1,y,b,f2;
	scanf("%lf %lf %lf \n %lf %lf %lf",&x,&a,&f1,&y,&b,&f2);
	printf("VALOR A PAGAR: R$ %0.2lf",a*f1+b*f2);
}
