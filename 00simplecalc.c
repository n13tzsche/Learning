#include <stdio.h>

int main()
{
	int x, y;

	printf("Prosze podac liczby calkowite:\n");

	printf("Podaj pierwsza liczbe\n");
	scanf("%d", &x);

	printf("Podaj druga liczbe\n");
	scanf("%d'", &y);

	printf("Suma: %d\n", x + y);

	printf("Roznica: %d\n", x - y);

	printf("Iloczyn: %d\n", x * y);

	printf("Srednia: %d\n", (x + y)/2);

	printf("Reszta z dzielenia: %d\n", x % y);

	float percentage;
	percentage = (float)y / x * 100.0;
	printf ("Procent: %.2f%%", percentage);

	return 0;
}
