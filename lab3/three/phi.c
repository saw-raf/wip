#include "function.h"

long int phi(long int n)
{
	long int result=n;
	long int divider;

	for(divider=2; divider*divider<=n; divider++)
	{
		if(n%divider==0)//check if divider is prime factor
		{
			while(n%divider==0)
				n/=divider;
			result=result - (result/divider);
		}
	}

	if(n>1)//there coulde be prime divider greater than sqrt(n), but only one
	{
		result=result-(result/n);
	}
	return result;
}
