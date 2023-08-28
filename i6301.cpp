#include <stdio.h>
#include <math.h>


int main () {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double d = (b*b) - (4.0*a*c);
	if (d <= 0 || a == 0) printf("Impossivel calcular");
	else {
		printf("R1 = %.5lf\n", (-b + sqrt(d)) / (2.0*a));
		printf("R2 = %.5lf\n", (-b - sqrt(d)) / (2.0*a));
	}

	return 0;
}
