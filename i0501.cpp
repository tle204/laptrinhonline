#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	if(n==61) {
		printf("Brasilia");
		exit(0);
	}
	if(n==71) {
		printf("Salvador");
		exit(0);
	}
	if(n==11) {
		printf("Sao Paulo");
		exit(0);
	}
	if(n==21) {
		printf("Rio de Janeiro");
		exit(0);
	}
	if(n==19) {
		printf("Campinas");
		exit(0);
	}
	if(n==27) {
		printf("Vitoria");
		exit(0);
	}
	if(n==32) {
		printf("Juiz de Fora");
		exit(0);
	}
	if(n==31) {
		printf("Belo Horizonte");
		exit(0);
	}
	if(n!=61||n!=71||n!=11||n!=21||n!=19||n!=27||n!=32||n!=31)
		printf("DDD nao cadastrado");
}
