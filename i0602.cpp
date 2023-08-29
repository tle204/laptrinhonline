#include<bits/stdc++.h>
int main(){
	int n,a[1000],d=0,d1=0,d2=0,d3=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2==0){
			d++;
		}
		if(a[i]%3==0){
			d1++;
		}
		if(a[i]%4==0){
			d2++;
		}
		if(a[i]%5==0){
			d3++;
		}
	}
	printf("%d Multiplo(s) de 2\n",d);
	printf("%d Multiplo(s) de 3\n",d1);
	printf("%d Multiplo(s) de 4\n",d2);
	printf("%d Multiplo(s) de 5\n",d3);
}
