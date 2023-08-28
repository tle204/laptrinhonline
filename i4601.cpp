#include<stdio.h>
int main(){
   double a[6];
   double dem =0,s=0,tb;
   for (int i = 0; i < 6; i++)
   {
      scanf("%lf",&a[i]);
      if (a[i]>0)
      {
         dem +=1;
         s=s+a[i];
      }
      
   tb=s/dem;    
   }
   if (dem==0)
   {
         printf("%.0lf Gia tri duong\n0.0",dem);
   }
   else printf("%.0lf Gia tri duong\n%.1lf",dem,tb);
   return 0;
}
