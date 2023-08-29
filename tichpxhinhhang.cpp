#include<bits/stdc++.h>
int main()
{
   double a,b,c;
   scanf("%lf%lf",&a,&b);
   if(a<b)
   {
   	c=(b-a)/2;
   	printf("%0.2lf",(a+b)*c/2);
   }
   if (a>b)
   {
   c=(a-b)/2;
   printf("%0.2lf",(a+b)*c/2);
}
}
