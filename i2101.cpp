#include<bits/stdc++.h>
int main()
{
   double a,b,c;
   scanf("%lf%lf%lf",&a,&b,&c);
   printf("TRIANGULO: %0.3lf",a*c/2);
   printf("\nCIRCULO: %0.3lf",3.14159*c*c);
   printf("\nTRAPEZIO: %0.3lf",(a+b)*c/2);
   printf("\nQUADRADO: %0.3lf",b*b);
   printf("\nRETANGULO: %0.3lf",a*b);
}
