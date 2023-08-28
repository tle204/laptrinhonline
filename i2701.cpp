#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int a,n,trong=0,ngoai=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a);
		if(a>=10&&a<=20)
			trong++;
		else
			ngoai++;
	}
	printf("%d",trong);
	printf(" trong\n%d",ngoai);
	printf(" ngoai");
}
