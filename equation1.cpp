#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a==0)
	{
		if(b==0)
		printf("Vo So Nghiem");
		else
		printf("Vo Nghiem");
	}
	else
	printf("%0.3lf",-b/a);
}
