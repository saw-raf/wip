#include <stdio.h>

int main()
{
	int n=1; 
	double suma=1;
	while(suma<=10)
	{
		n++;
		suma+=1/(float)n;
	}
	printf("%d\n",n);
	return 0;
}
