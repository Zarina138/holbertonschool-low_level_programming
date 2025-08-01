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
	int regem_tapildi = 0;

	while (s[i])
	{
		if (s[i] == '-')
			isare *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int reqem = s[i] - '0';

			if (netice > (2147483647 - reqem) / 10)
			{
				if (isare == 1)
					return 2147483647;
				else
					return -2147483648;
			}

			regem_tapildi = 1;
			netice = netice * 10 + reqem;
		}
		else if (regem_tapildi)
			break;
		i++;
	}

	return isare * netice;
}
