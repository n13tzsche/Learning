#include <stdio.h>

int main ()
{
	int x;

	printf("Podaj liczbe calkowita = ");
	scanf("%d", &x);

	if (x%2==0)
		printf("Liczba parzysta\n");
	else{
	printf("Liczba nieparzysta\n");
	}
	return 0;
}
