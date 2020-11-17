#include "stdio.h"

int main()
{
  int n = 6;
  // petle w wierszach

  int i, j;
  for (i=1; i<=n; ++i)
  {
    // petla wyswietlajaca ilosc spacji
    for (j=1; j<=n-i+10; ++j)
    printf(" ");

    // petla wyswietlajaca x gwiazdek
    for (j=2; j<=2*i; ++j)
    printf("*");

    printf("\n");
  }
  n = 6;
  for (i=1; i<=n; ++i)
  {
    // petla wyswietlajaca ilosc spacji
    for (j=1; j<=n-i+9; ++j)
    printf(" ");

    // petla wyswietlajaca x gwiazdek
    for (j=1; j<=2*i; ++j)
    printf("*");

    printf("\n");
  }
  n = 7;
  for (i=1; i<=n; ++i)
  {
    // petla wyswietlajaca ilosc spacji
    for (j=1; j<=n-i+8; ++j)
    printf(" ");

    // petla wyswietlajaca x gwiazdek
    for (j=1; j<=2*i; ++j)
    printf("*");

    printf("\n");
  }
  n = 2;
  for (i=1; i<=n; ++i)
  {
    // petla wyswietlajaca ilosc spacji
    for (j=1; j<=n+12; ++j)
    printf(" ");

    // petla wyswietlajaca x gwiazdek
    for (j=1; j<=2; ++j)
    printf("*");

    printf("\n");
  }
  return 0;
}
