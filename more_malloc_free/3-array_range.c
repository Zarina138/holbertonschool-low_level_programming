#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 * @min: minimum num
 * @max: maximum num
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;
	size = max - min + 1;
	
	if (min > max)
		return (NULL);
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}
