#include<bits/stdc++.h>
#include<iostream>
int main(){
	double f,n,a,b;
	scanf("%lf",&n);
	a=(1+sqrt(5))/2;
	b=(1-sqrt(5))/2;
	f=(pow(a,n)-pow(b,n))/sqrt(5);
	printf("%0.1lf",f);
}
