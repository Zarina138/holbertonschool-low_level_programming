#include "main.h"

/**
 * @dest: Destinationn
 * @src: Sourcee
 * Return: Returnn Dest..
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
