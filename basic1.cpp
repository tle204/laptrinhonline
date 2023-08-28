#include<stdio.h>
#include<math.h>
int main() {
	long int n,a[10000],dem=0,s=0,x=0,tb,dem2=0;
	scanf("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%ld",&a[i]);
		s+=a[i];
		dem++;
	}
	if(dem==0)
	printf("0 0");
	tb=s/dem;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<tb)
		dem2++;
	}
	printf("%ld %ld",tb,dem2);
}
