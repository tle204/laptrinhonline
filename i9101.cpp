#include<stdio.h>
#include<math.h>
int main ()
{
	int n,a=0,b=0,c=0;
	scanf (	"%d",&n);
	do {
	
	a+= n/3600;
	b+= (n-a*3600)/60;
	c+= n-a*3600-b*60;
	printf ("%d:%d:%d",a,b,c);
	}while (n<0);
}
