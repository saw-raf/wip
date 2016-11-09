#include <stdio.h>
#include <assert.h>

int main()
{
	int n,i;
	float x,srednia=0;
	puts("Podaj n");
	scanf("%d",&n);
	assert(n>0);
	i=n;
	while(i>0)
	{
		puts("Podaj kolejna liczbe:");
		scanf("%f",&x);
		srednia+=x;
		i--;
	}
	srednia/=n;
	printf("srednia to: %f\n",srednia);
	return 0;
}
