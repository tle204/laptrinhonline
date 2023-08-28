#include<bits/stdc++.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0&&b==0)
	printf("Tran dau keo dai 24 gio");
	else
	if(a>b)
	printf("Tran dau keo dai %d gio",24-a+b);
	if(a<b)
	printf("Tran dau keo dai %d gio",b-a);
}
