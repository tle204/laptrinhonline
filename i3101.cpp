#include <bits/stdc++.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && b<c)
    printf("Max = %d",c);
    else
     if (a<b && b>c)
     printf ("Max = %d",b);
     else
     printf("Max = %d",a);
}
