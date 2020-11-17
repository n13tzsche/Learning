#include <stdio.h>

int main()
{	
    int n, i;
    unsigned long k = 1;

   	printf("Oblicz silnie z liczby : ");
    	scanf("%d",&n);

    for (i=1; i<=n; i++){
    	k*=i;
    }
    	printf("%d! = %lu\n", i-1, k);
    return 0;
}
