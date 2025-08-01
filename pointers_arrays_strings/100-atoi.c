#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value.
 */
int _atoi(char *s)
{
	int i = 0;
	int isare = 1;
	int netice = 0;
	int regem = 0;

	while (s[i])
	{
		if (s[i] == '-')
			isare *= -1;
		else if (s[i] == '+')
		    isare *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			regem = 1;
			netice = netice * 10 + (s[i] - '0');
		}
		else if (regem)
			break;
		i++;
	}

	return (isare * netice);
}
