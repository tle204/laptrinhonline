#include<stdio.h>
int main()
{
float a[13][13],tong=0;
char c;int b,i,j;
scanf("%d\n%c",&b,&c);

for(i=0;i<12;i++)
for(j=0;j<12;j++)
{
    scanf("%f",&a[i][j]);
}
for(i=0;i<=11;i++)
{
    tong+=a[i][b];
}
if(c=='S') printf("%.1f",tong);
else printf("%.1f",tong/12);
}
