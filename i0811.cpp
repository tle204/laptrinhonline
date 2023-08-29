#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    int min =x[0];
    int vitri;
    for (int i = 1; i < n; i++)
    {
        if (min>x[i])
        {
            min=x[i];
            vitri = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d",min,vitri);
}
