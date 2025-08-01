#include "main.h"

/**
 *  Description: Prints a function that swaps the values 
 *  of two integers
 * 
 * @a: aaaa
 * @b: bbbb
 * @z: zzzz
 */

void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
