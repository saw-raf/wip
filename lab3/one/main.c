#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "fun.h"

int main(void)
{
	char *str;
	int n;

	puts("Podaj dlugosc slowa: ");
	scanf("%d",&n);
	assert(n>0);

	str=(char*)malloc((n+1)*sizeof(char));

	puts("Podaj napis (bez polskich znakow):");
	scanf("%s",str);

	assert(strlen(str)==n);

	if(palindrom(str)==true)
		printf("To palindrom\n");
	else
		puts("To nie palindrom");

	return 0;
}
