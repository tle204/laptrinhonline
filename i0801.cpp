#include<stdio.h>
#include<math.h>
int main()
{
    int y;
    int i = 0;
    long int a[99];
    for(i=0;i<99;i++)
    {
        scanf("%ld",&a[i]);
    }
    long int m = a[0];
    for(i=0;i<99;i++)
    {
        if(a[i] >= m)
    {
        m = a[i];
        y = i+1;
    }
    }
    printf("%ld\n%2d",m,y);
    return 0;
}
