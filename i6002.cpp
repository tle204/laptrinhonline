#include<bits/stdc++.h>

int main() {
	int a[10],n,dem=0,i;
	scanf("%d",&n);
	for( i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]==n)
		dem++;
	}
	printf("%d",dem);
}
