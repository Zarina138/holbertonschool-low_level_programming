#include "main.h"

/**
 * _strlen - Stringimizin uzunluguu))
 * @s: ssss
*/

int _strlen(char *s)
{
	int len = 0;
	while(*s)
	{
		len++;
		s++;
	}
	return(len);
}
