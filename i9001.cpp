#include<bits/stdc++.h>
using namespace std;
int main() {
	string ten;
	double a,b;
	getline (cin,ten);
	cin >> a >> b;
	double c = a + b * (15.0/100);
	printf("TONG = R$ %0.2lf",c);
}
