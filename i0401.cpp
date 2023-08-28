#include <stdio.h>
#include <math.h>
 
int main(void) {
    double a,b,c,d,t,k;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    t=(2*a+3*b+4*c+d)/10;
    t=round(t*10)/10.0;
    printf("Media: %.1lf",t);
    if(t>=7) printf("\nAluno aprovado.");
    else if(t<5) printf("\nAluno reprovado.");
    else
    {
    	printf("\nAluno em exame.");
    	scanf("%lf",&k);
    	printf("\nNota do exame: %.1lf",k);
    	t=(k+t)/2;
    	t=round(t*10)/10.0;
        if (t>=5) printf("\nAluno aprovado.");
        else printf("\nAluno reprovado.");
    	printf("\nMedia final: %.1lf",t);
    }
 
}
