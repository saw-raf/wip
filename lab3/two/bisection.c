#include <math.h>
#include <limits.h>
#include "fun.h"

double bisection(double a, double b, double eps)
{
	double s;//approximation of zero of a function

	s=(a+b)/2;
	while((fabs(f(s))>eps))
	{
		if(f(a)*f(s)<0)
			b=s;
		else
			a=s;
		s=(a+b)/2;
	}

	return s;
}
