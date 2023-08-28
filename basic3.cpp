#include<stdio.h>
#include<math.h>
int main() {
	long int n;
	scanf("%ld",&n);
	int a[n],x=0,y=0,c=0,b=0;
	for (int i = 0; i < n; i++) {
		scanf("%ld",&a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i]%2==0) {
			c=c+1;
			x=x+a[i];
		} else {
			b=b+1;
			y=y+a[i];
		}
	}
	if(c==0&&b==0) {
		printf("0\n0");
		return 0;
	}
	if(c==0) {
		printf("%ld\n0",y/b);

		return 0;
	}
	if(b==0) {
		printf("0\n%ld",x/c);
		return 0;
	}
	
	printf("%ld\n%ld",y/b,x/c);

}
