#include <stdio.h>

int main ()
{
	double n, i, x;
		printf("Podaj liczbe n \n");
		scanf("%lf", &n);
	
		for (i=0; i<n; i+=1){
			x=n/(n+1)*n;}
		printf("Srednia kolejnych liczb n: %lf\n", x);
		return 0;
}
