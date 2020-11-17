#include <stdio.h>

int main()
{
	float a, b, c;
	char ch1;

	printf("Simple calc, prosze uzywac '+', '-', '*',  '/'.\n");

	printf("Pierwsza liczba : \n");
		scanf("%f", &a);
	printf("Druga liczba : \n");
		scanf("%f", &b);

	getchar();
	printf("Jaka operacja : \n");
		scanf("%c", &ch1);

switch (ch1)
{
	case '+': c=a+b;
		  printf("Wynik dodawania: %f\n", c); break;
	case '-': c=a-b;
		  printf("Wynik odejmowania: %f\n", c); break;
	case '*': c=a*b;
		  printf("Wynik mnożenia: %f\n", c); break;

	case '/':
	c=a/b;

	if (b==0)
		printf("Error");
else
		printf("Wynik dzielenia: %f\n", c);
}
return 0;
}
