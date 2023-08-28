#include"stdio.h"
int main() {
	int a[1005],i=1,dem=0;;
	do {
		scanf("%d",&a[i]);
		dem++;
	} while(a[i++]!=0);
	for(int i=1; i<=dem; i++) {
		for(int j=1; j<=a[i]; j++) printf(" %d",j);
		printf("\n");
	}
}
