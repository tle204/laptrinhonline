#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&b<c||b>c&&b<a)
	printf("%d",b);
	if(a>b&&a<c||a<b&&a>c)
	printf("%d",a);
	if(c>a&&c<b||c<a&&c>b)
	printf("%d",c);
	if(a==b||b==c||a==c||a==b&&a==c)
	printf("KHONG CO SO O GIUA");
}
