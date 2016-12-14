#include <string.h>
#include "fun.h"

bool palindrom(char napis[])
{
	int i;

	for(i=0;i<strlen(napis)/2;i++)
	{
		if(napis[i]!=napis[strlen(napis)-1-i])
		return false;
	}
	return true;
}
