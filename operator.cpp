#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	long int a,b;
	scanf("%ld%ld",&a,&b); 
	printf("%ld+%ld=%ld\n%ld-%ld=%ld\n%ld*%ld=%ld\n%ld/%ld=%ld\n",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b);
    printf("%ld",a);
    printf("%%");
    printf("%ld=%ld",b,a%b);
}
