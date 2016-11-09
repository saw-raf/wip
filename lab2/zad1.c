#include <stdio.h>
#include <assert.h>
#define NO_NOMINALS 14
#define NO_BANKNOTES 5

int main ()
{
	float N[]={ 200, 100, 50, 20, 10, 5, 2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };//tablica dostepnych nominalow
	int counter[NO_NOMINALS];//tablica mowiaca ile sztuk danego nominalu mamy wydac
	int i;
	int r_zloty,r_groszy; //zmienne przechowujace reszte pozostala do wydania
	float r;

	for(i=0;i<NO_NOMINALS;i++) //narazie mamy do wydania 0 sztuk kazdego nominalu
		counter[i]=0;

	puts("Podaj ile reszty mam wydac.");//interfejs uzytkownika

	puts("Podaj liczbe zlotowek: ");
	scanf("%d",&r_zloty);
	assert(r_zloty>=0);

	puts("Podaj liczbe groszy (mniejsza niz 100): ");
	scanf("%d",&r_groszy);
	assert(r_groszy>=0 && r_groszy<100);

	r=(float)(r_zloty+0.01*r_groszy);
	i=0;
	while(r>=0 && i<NO_NOMINALS)//wyznaczamy liczbe kazdego nominalu za pomoca metody zachlannej
	{
		if(r-N[i]>=0)
		{
			counter[i]++;
			r-=N[i];
		}
		else
			i++;
	}

	puts("BANKNOTY:");//wypisywanie banknotow
	for(i=0;i<NO_BANKNOTES;i++)
	{
		if(counter[i]!=0)
			printf("%d x %f\n",counter[i],N[i]);
	}

	puts("MONETY");//wypisywanie monet
	for(i=NO_BANKNOTES;i<NO_NOMINALS;i++)
	{
		if(counter[i]!=0)
		{
			if(N[i]>=1)
				printf("%d x %.0f zl\n",counter[i],N[i]);
			else
				printf("%d x %.0f gr\n",counter[i],100*N[i]);
		}
	}
	return 0;
}
