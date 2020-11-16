#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double n,k=1;
    scanf("%lf",&n);
    double i;
    printf("Indeks0\t1\n");
    if(n > 0)
    {
        printf("Indeks1\t1\n");
    }
    for ( i=2;i<=n;i++){
    k*=i;
    printf("Indeks%lf\t%lf\n",i,k);
    }
    return 0;
}
