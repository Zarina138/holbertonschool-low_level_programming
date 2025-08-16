#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using
 * @b: memory size
 *
 */
void *malloc_checked(unsigned int b)
{
	int *z;

	z = malloc(b);
	if (z == NULL)
		exit (98);
	return;
}
