#include <stdio.h>
#include <math.h>

double root(double, int);

int main()
{
	printf("%lf\n",root(2,2));
	return 0;
}

double root(double number, int n)
{
	double result=number;
	double tmp=pow(result,(n-1));
	double e=0.000001;
	double checker=number-result*tmp;
	if(checker<0)
		checker=-checker;
	while(checker>=e)
	{
		result=1/n*((n-1)*result+(number/tmp));
		tmp=pow(result,(n-1));
		checker=number-result*tmp;
		if(checker<0)
			checker=-checker;
	}
	return result;
}
