#include <math.h>
#include <limits.h>
#include <assert.h>
#include "fun.h"

double bisection(double a, double b, double eps)
{
	long int i=0;
	double s;//approximation of zero of a function

	s=(a+b)/2;
	while((fabs(f(s))>eps))
	{
		if(f(a)*f(s)<0)
			b=s;
		else
			a=s;
		s=(a+b)/2;
		i++;
		assert(i<LONG_MAX);
	}

	return s;
}
