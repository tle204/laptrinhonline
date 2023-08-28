#include<bits/stdc++.h>

int main() {
	double a,b,c,d,n;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	n=(c-a)*(c-a)+(d-b)*(d-b);
	printf("%0.4lf",sqrt(n));
}
