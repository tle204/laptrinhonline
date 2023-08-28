#include"bits/stdc++.h"
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	if(x==1)
	printf("Tong: R$ %0.2lf",4*y);
	if(x==2)
	printf("Tong: R$ %0.2lf",4.5*y);
	if(x==3)
	printf("Tong: R$ %0.2lf",5*y);
	if(x==4)
	printf("Tong: R$ %0.2lf",2*y);
	if(x==5)
	printf("Tong: R$ %0.2lf",1.5*y);
}
