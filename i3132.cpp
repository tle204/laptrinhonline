#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {

	int a, b, c,de=1;
	scanf("%d%d%d",&a,&b,&c);
b1: {
		if(a>=(b+c)||b>=(a+c)||c>=(a+b)) {
			printf("Invalido");
			return 0;
		}
		goto b2;
	}
b2: {
		if(a==b&&b==c&&a==c) {
			printf("Valido-Equilatero");
			if(a*a+b*b==c*c||c*c+b*b==a*a||b*b==a*a+c*c) {
				printf("\nRetangulo: S");
			} else printf("\nRetangulo: N");
			return 0;
		}
		goto b3;
	}
b3: {
		if(a==b||b==c||c==a) {
			cout<<"Valido-Isoceles";
			if(a*a+b*b==c*c||c*c+b*b==a*a||b*b==a*a+c*c) {
				printf("\nRetangulo: S");
			} else printf("\nRetangulo: N");
			return 0;
		}
		goto b4;
	}
b4:
	if(a!=b&&c!=b&&c!=a) {
		cout<<"Valido-Escaleno";
		if(a*a+b*b==c*c||c*c+b*b==a*a||b*b==a*a+c*c) {
			printf("\nRetangulo: S");
		} else printf("\nRetangulo: N");
		return 0;
	}
}
