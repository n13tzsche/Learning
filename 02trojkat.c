#include <stdio.h>

int main ( void )
{
	printf("Podaj wysokosc trojkata: ");
	int WIERSZY;
	scanf("%i", &WIERSZY);
	
	// petle po wierszach
	int i, j;
	for (i=1; i<=WIERSZY; ++i)
	{
		// petla wyswietlajaca Y spacji
		for (j=1; j<=WIERSZY-i+10; ++j)
			printf(" ");

		// petla wyswietlajaca X gwiazdek		
		for (j=1; j<=2*i-1; ++j)
		printf("*");

		printf("\n");
	}
	return 0;
}
