#include<stdio.h>
#include<math.h>
	 main(){
		int A, B , C , D;	
		scanf("%d %d %d %d", &A, &B, &C, &D);
		if(B>C&&D>A&&C+D>A+B&&C>0 &&D>0&&A%2==0){
				printf("Chap nhan");
		}
		else
		printf("Khong chap nhan");
	}
