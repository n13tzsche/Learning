#include <stdio.h>

int main ()
{
	double a, b, c, delta;

	printf("Podaj zmienne a, b, c w funkcji ax2 + bx + c\n");

	printf("Pierwsza zmienna a : \n");
	scanf("%lf", &a);

	printf("Druga zmienna b : \n");
	scanf("%lf", &b);

	printf("Trzecia zmienna c : \n");
	scanf("%lf", &c);

	delta = b*b - 4*a*c;
	printf("delta = %lf\n", delta);

	if (delta < 0){
	printf("0 pierwiastkow");
	}
	else if (delta == 0){
	printf("1 pierwiastek");
	}
	else if (delta > 0){
	printf("2 pierwiastki");
	}
	return 0;
}
