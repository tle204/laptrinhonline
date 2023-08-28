#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+c>b&&a+b>c&&c+b>a){
		float p, s;
		p=(a+b+c)/2;
		printf("%.2f\n",a+b+c);
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f",s);
	}
	else printf("khong la tam giac");
}
