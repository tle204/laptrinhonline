#include<stdio.h>
#include<math.h>
int main(){
        double a,b,c,x,delta,x1,x2;
        scanf("%lf%lf%lf",&a,&b,&c);
        if (a==0)
        { if (b==0)
        { if (c==0) printf ("vo so nghiem");
        else printf ("vo nghiem");}
        else { printf ("%0.3lf",x=-c/b);}}
        else {delta=b*b-4*a*c;
        if (delta < 0) printf("vo nghiem");
        else if (delta ==0) printf ("%0.3lf",x= -b/(2*a));
        else { x1=(-b+sqrt (delta))/(2*a);x2 =(-b-sqrt(delta))/(2*a);
        if (x1 <x2) printf ("%0.3lf \n %0.3lf",x1=(-b+sqrt (delta))/(2*a), x2=(-b-sqrt(delta))/(2*a));
        else  printf ("%0.3lf \n %0.3lf",x2=(-b-sqrt (delta))/(2*a), x1=(-b+sqrt(delta))/(2*a)) ;}
        }
}
