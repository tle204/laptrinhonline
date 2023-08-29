#include <stdio.h>

int main()
{
    int i;
    float a[105];
    for (i=0;i<100;i++)
    {
        scanf("%f",a+i);
    }
    for (i=0;i<100;i++)
    {
        if (a[i]<=10) 
        {
            if (a[i]-(int)a[i]!=0) printf("A[%d] = %.1f\n",i,a[i]);
            else printf("A[%d] = %.0f\n",i,a[i]);
        }
    }
}
