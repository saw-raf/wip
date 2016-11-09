#include <stdio.h>
#include <math.h>



int main()
{
	int i;
	double wynik=1;

	puts("Program policzy pierwiastek 1000 stopnia z liczby 1000!");
	for(i=1000;i>=2;i--)
		wynik*=pow(i,(1.0/1000));
	printf("Wynik to %0.14lf\n",wynik);
	return 0;
}
