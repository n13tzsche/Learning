#include <stdio.h>

int main()
{
	int x, y;

	printf("Podaj dlugosc boku x\n");
	scanf("%d", &x);

	printf("Podaj dlugosc boku y\n");
	scanf("%d", &y);

	printf("Pole prostokata = %d\n", x * y);
	printf("Obwod prostokata - %d\n", (2*x) + (2*y));
	
       return 0;
}

