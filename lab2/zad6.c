#include <stdio.h>
#include <assert.h>

int sumaDzielnikow(int);//funkcja wyznacza sume dzielnikow wlasciwych dla n>1

int main()
{
	int i,j;
	int sigma[1001];//w sigma[i] bedziemy przechowywac wart. funkcji sumaDzielnikow(i)

	puts("");
	for(i=2;i<1001;i++)
	{
		sigma[i]=sumaDzielnikow(i);
		if(i==sigma[i])//od razu w jednej petli sprawdzamy czy liczba jest doskonala
			printf("%4d jest liczba doskonala\n",i);
	}

	printf("\n\nPary liczb zaprzyjaznionych to:\n");
	for(i=2;i<1001;i++)
		for(j=i+1;j<1001;j++)//kazda pare chcemy sprawdzac tylko raz dlatego j=i+1
			if(i==sigma[j] && j==sigma[i])
				printf("%4d oraz %4d\n",i,j);
	puts("");
	return 0;
}

int sumaDzielnikow(int n)
{
	assert(n>1);//dla n<1 dzielniki wlasciwe nie istnieja
	int wynik=1;//kazda liczba dzieli sie przez 1
	int dzielnik=2;
	while(dzielnik*dzielnik<=n)
	{
		if(n%dzielnik==0)//jesli dana liczba dzieli sie przez dzielnik to tez dzieli sie przez (n/dzielnik)
		wynik+=(dzielnik+n/dzielnik);
		dzielnik++;
	}
	return wynik;
}

