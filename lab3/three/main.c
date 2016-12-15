#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "function.h"

int main(void)
{
	long int n;

	puts("Podaj n");
	scanf("%ld",&n);
	assert(n>0);

	printf("Wartosc funkcji phi dla %ld wynosi: %ld\n",n,phi(n));
	return 0;
}

