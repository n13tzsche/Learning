#include <stdio.h>

int main()
{
	double x, y;

		printf("Podaj dlugosc boku x\n");
		scanf("%lf", &x);

		printf("Podaj dlugosc boku y\n");
		scanf("%lf", &y);

		printf("Pole prostokata = %lf\n", x * y);
		printf("Obwod prostokata - %lf\n", (2*x) + (2*y));
	
       return 0;
}

