#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	long int n,a[10000],b[10000];
	scanf("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%ld%ld",&a[i],&b[i]);
		printf("%ld\n",a[i]+b[i]);
	}
}
