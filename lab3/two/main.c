#include <stdio.h>
#include <math.h>
#include "fun.h"

int main(void)
{
	double a=2,b=4;
	int k;

	for(k=1;k<=8;k++)
	{
		printf("k=%d . Miejsce zerowe to: %.16lf\n", k,bisection(a,b,pow(10,-k)));
	}
	return 0;
}

