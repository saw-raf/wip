#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define NO_NOMINALS 14
#define NO_BANKNOTES 5
#define INT_MAX 2000000 //to do zmiany <limit.h> ????


//dynamicznie
int main()
{
	float N[]={ 0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1, 2, 5, 10, 20, 50, 100, 200};//tablica nominalow
	int r_zloty,r_groszy,reszta;
	int **tab;
	int i,j;

	puts("Podaj ile reszty wydac");
	puts("Podaj liczbe zloty");
	scanf("%d",&r_zloty);
	puts("Podaj liczbe groszy");
	scanf("%d",&r_groszy);

	reszta=r_zloty*100+r_groszy;
	reszta++;

	//wszedzie zwiekszyc NO_NOMINALS o 1
	tab=(int**)malloc((NO_NOMINALS+1)*sizeof(int*));//tablica do realizacji programowania dynamicznego
	for(i=0;i<(NO_NOMINALS+1);i++)
		tab[i]=(int*)malloc(reszta*sizeof(int));

	for(j=0;j<reszta;j++)
		tab[0][j]=INT_MAX;

	for(i=0;i<NO_NOMINALS+1;i++)
		tab[i][0]=0;

	for(i=1;i<NO_NOMINALS+1;i++)
		for(j=1;j<reszta;j++)
		{
			//int a=(int)N[i-1]; zrobic to dla czytelnosci
			if(j-(int)(100*N[i-1])>=0 && tab[i][j-(int)(100*N[i-1])]+1<tab[i-1][j])
				tab[i][j]=tab[i][j-(int)(100*N[i-1])]+1;
			else
				tab[i][j]=tab[i-1][j];
		}
	//printf("%d\n",tab[NO_NOMINALS][reszta-1]);
	i=NO_NOMINALS;
	j=reszta-1;
	while(j>0)
	{
		if(tab[i][j]==tab[i-1][j])
			i--;
		else
		{
			printf("%f\n",N[i-1]);
			j=j-N[i-1]*100;//chyba dobrze
		}
	}
	return 0;
}


/*METODA ZACHLANNA
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
*/
