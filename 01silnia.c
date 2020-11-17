#include <stdio.h>

int main()
{	
    unsigned long n, i, k=1;

    scanf("%lu",&n);

    for (i=1; i<=n; i++){
    	k*=i;
    }
    	printf("Silnia %lu : = %lu\n", i-1, k);
    return 0;
}
