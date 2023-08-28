#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	double r;
	scanf("%lf",&r);
	if(r<0)
	printf("NO CIRCLE");
	else
	{
		printf("%0.2lf\n",2*M_PI*r);
		printf("%0.2lf",M_PI*r*r);
	}
}
