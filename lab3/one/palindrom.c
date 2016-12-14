#include <string.h>
#include "fun.h"

bool palindrom(char str[])
{
	int i;

	for(i=0;i<strlen(str)/2;i++)
	{
		if(str[i]!=str[strlen(str)-1-i])
		return false;
	}

	return true;
}
