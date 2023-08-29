#include<stdio.h>
int main()
{
float a[13][13],tong=0;
char c;int i,j;
scanf("%c",&c);
for(i=0;i<12;i++)
for(j=0;j<12;j++)
{
    scanf("%f",&a[i][j]);
}
for(i=11;i>=7;i--)
for(j=12-i;j<i;j++)
{
    tong+=a[j][i];
}
if(c=='S') printf("%.1f",tong);
else printf("%.1f",tong/30);
}
