#include <stdio.h>

/// getchar nie wiem do konca jak działa

int main()
{
  int c;
  while ( (c = getchar()) != EOF)
    putchar(c);
}
