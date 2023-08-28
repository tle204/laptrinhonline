#include<stdio.h>
int main(){
	int a,b;
	
	while (1){
		scanf ("%d%d",&a,&b);
		int t=0;int x,y;
		if (a<=0||b<=0) break;
		else {
			x=a<=b?a:b;
			y=a+b-x;
				for (int i=x;i<=y;i++){
				printf ("%d ",i);
				t+=i;
			}
			printf ("Tong=%d",t);
			printf ("\n");
		}
	}
}
