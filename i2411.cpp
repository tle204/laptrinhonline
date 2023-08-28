#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a=1,b=2,c=3;
   for (int i = 0; i < n; i++)
   {
      printf("%d %d %d Nam\n",a,b,c);
      a+=4;
      b+=4;
      c+=4;
   }
}
