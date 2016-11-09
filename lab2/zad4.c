#include <stdio.h>
#include <assert.h>

int main()
{
	unsigned int number, counter=0;
	puts("Podaj liczbe calkowita bez znaku");
	scanf("%u",&number);//czy nie powinno byc np. ud zamiast d??
	assert(number>=0);//przy unsigned ta aseracja nie działa, czemu?? :((
	while(number>0)
	{
		if(number%2==1)
			counter++;
		number/=2;
	}
	printf("liczba jedynek w binarnej reprezentacji: %u\n",counter);
	return 0;
}
